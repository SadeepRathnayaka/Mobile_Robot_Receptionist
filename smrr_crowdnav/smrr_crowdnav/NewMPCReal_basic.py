#This is the basic crowd navigation MPC node. it is not considering static obstacles.

import casadi as cs
import numpy as np
import logging
from .orca_plus_All import ORCAPlusAll
from .state_plus import FullState, FullyObservableJointState
import yaml
import os
from ament_index_python.packages import get_package_share_directory


class NewMPCReal():
    def __init__(self):

        # Load the YAML config file
        package_path = os.path.dirname(__file__)  # Current file's directory
        config_path = os.path.join(package_path,'config', 'config.yaml')
        
        with open(config_path, 'r') as file:
            configs = yaml.safe_load(file)
        
        # Get parameters for this class
        node_name = "NewMPCReal"  # Define your node's name
        node_configs = configs.get(node_name, {})

        # Set class attributes for each parameter
        for key, value in node_configs.items():
            setattr(self, key, value)  # Dynamically add attributes

        # Log the loaded parameters
        time_step = getattr(self, 'time_step', 1)  # Default to 1 if not defined
        print(f"Loaded time_step size: {time_step}")
        
        # Environment-related variables
        self.time_step = time_step
        self.human_max_speed = getattr(self, 'human_max_speed', 0.5)  # Default to 1.0
        
        # MPC-related variables
        self.horizon = getattr(self, 'horizon', 5)  # Default to 15
        
        

    def predict(self, env_state):
        human_states = []
        robot_state = env_state.self_state
        robot_radius = robot_state.radius
        x_inital =(env_state.self_state.px, env_state.self_state.py, env_state.self_state.theta)


        if robot_state.omega is None:
            robot_state.omega = 0

        # Convert robot_state (of type SelfState) to FullState
        robot_full_state = FullState(px=robot_state.px,  py=robot_state.py, vx=robot_state.vx,  vy=robot_state.vy, radius=robot_state.radius, 
                                      gx=robot_state.gx,  gy=robot_state.gy, v_pref=robot_state.v_pref,  theta=robot_state.theta,  omega=robot_state.omega)
        
        for hum in env_state.human_states:               
            gx = hum.px + hum.vx * 2 #
            gy = hum.py + hum.vy * 2 # need to remove when the goal prediction is fully completed
            hum_state = FullState(px=hum.px, py=hum.py, vx=hum.vx, vy=hum.vy, 
                                  gx=gx, gy=gy, v_pref=self.human_max_speed, 
                                  theta=np.arctan2(hum.vy, hum.vx), radius=hum.radius, omega=None)                    
            human_states.append(hum_state)
        
    

        # Create a FullyObservableJointState with the new robot_full_state
        state = FullyObservableJointState(self_state=robot_full_state, human_states=human_states, static_obs=env_state.static_obs)
            
        # Step 1: Predict future human positions over the time horizon using ORCA
        orca_policy = ORCAPlusAll(self.time_step, self.horizon)
        predicted_human_poses = orca_policy.predictAllForTimeHorizon(state)       
        #logging.info(f"predict {predicted_human_poses}")

        # Step 2: Setup MPC using CasADi
        nx_r = 3  # Robot state: [px, py, theta]
        nu_r = 2  # Robot control inputs: [v, omega]
        
        # Initial state and current velocity
        #x0 = [robot_state.px, robot_state.py, robot_state.theta] # Initial robot state
        
        # Concatenate vx and vy into a vector, then compute the squared sum
        u_current = cs.vertcat(cs.sumsqr(cs.vertcat(robot_state.vx, robot_state.vy)), robot_state.omega)

        
        # Create Opti object
        opti = cs.Opti()  # CasADi optimization problem
        U_opt = opti.variable(nu_r, self.horizon)  # Decision variables for control inputs

        # Define robot dynamics based on accumulated control inputs
        def dynamics(x0, U):
            states = []
            states.append(x0)
            #U = np.array(cs.MX(U))

            
            for t in range(self.horizon):
                #u_t = U[:, t]
                v = U[0,t]
                omega = U[1,t]

                #print("V",cs.MX(v))
                #print("omega",cs.MX(omega))


                u_t =[v,omega]
                
                
                
                # Update the robot's state using the control input at the current time step
                epsilon = 1e-6
                #next_state = states[t] + cs.vertcat(
                    #u_t[0] * (cs.sin(states[t][2] - u_t[1] * self.time_step) - cs.sin(states[t][2])) / (u_t[1] + epsilon),
                    #u_t[0] * (-cs.cos(states[t][2] + u_t[1] * self.time_step) + cs.cos(states[t][2])) / (u_t[1] + epsilon),
                    #u_t[1] * self.time_step
                #)

                next_state = states[t] + cs.vertcat(
                    v * (cs.cos(states[t][2] + v* self.time_step)),
                    v * (cs.sin(states[t][2] + v * self.time_step)) ,
                    omega * self.time_step
                )

                


                states.append(next_state)
            
            return states[1:]


     
        X_pred = dynamics(x_inital, U_opt)
        
        
        goal_pos = cs.MX([robot_state.gx, robot_state.gy])

        # Step 3: Cost function for goal deviation and control effort
        Q_goal = 500 # Medium priority to reach the goal
        Q_control = 10 # Moderate weight for smooth control inputs
        Q_pref = 5 # Medium preference for stable velocity
        Q_terminal = 300# Strong weight to reach the goal at the terminal state
        Q_human = 3 # 5
        Q_orientation = 3

        
        num_humans = len(predicted_human_poses[0][0][1:])
        future_human_states = [[[]]]
        if num_humans > 0:
            future_human_states = np.zeros((num_humans, self.horizon,2))
            # print(num_humans)
            # print(future_human_states)
            # print("predicted",predicted_human_poses)



        for i in range(num_humans):
            for t in range(self.horizon):
                future_human_states[i][t][0] = float(predicted_human_poses[0][t][i+1][0])  # X-coordinate
                future_human_states[i][t][1] = float(predicted_human_poses[0][t][i+1][1]) # Y-coordinate



        def cost_function(X_pred, U, human_states):
            cost = 0
            for t in range(self.horizon):
                dist_to_goal = cs.sumsqr(X_pred[t][:2] - goal_pos)  # Distance to the goal
                angle_to_goal = np.arctan2((goal_pos-X_pred[t][:2])[1],(goal_pos-X_pred[t][:2])[0])

                #cost += cs.sumsqr(angle_to_goal-X_pred[t][2])*Q_orientation

                # Penalize control inputs (mainly smoothness in omega)
                if t > 0:
                    # Penalize change in omega between consecutive time steps
                    control_smooth = cs.sumsqr(U[1, t])
                    control_pref = cs.sumsqr(U[0, t] - 0.5)  # Prefer certain velocity
                else:
                    control_smooth = cs.sumsqr(U[1, t])
                
                    #current_velocity = cs.vertcat(robot_state.vx, robot_state.vy)

                    control_pref = cs.sumsqr(U[0, t] - 0.5)
                
                
                for hum in human_states[t][1:]:
                    human_pos = cs.vertcat(hum[0], hum[1])  # Human's position
                    dist_to_human_sqr = cs.sumsqr(X_pred[t][:2] - human_pos)
                    human_radius = hum[4]  # Human's radius
                    cost -= Q_human*(dist_to_human_sqr - (human_radius + robot_radius + 0.1)**2)  

                cost += Q_goal * dist_to_goal  + control_pref * Q_pref - Q_control * (control_smooth)
                #cost += Q_goal * dist_to_goal + control_pref * Q_pref
            
            # Terminal state goal deviation
            dist_terminal = cs.sumsqr(X_pred[-1][:2] - goal_pos)
            cost += Q_terminal * dist_terminal
            return cost


        # Step 4: Collision avoidance constraints (humans)
        def collision_constraint(X_pred, human_states):
            constraints = []
            for t in range(self.horizon):
                robot_pos = X_pred[t][:2]
                for hum in human_states[t][1:]:
                    human_pos = cs.vertcat(hum[0], hum[1])  # Human's position
                    dist_to_human_sqr = cs.sumsqr(robot_pos - human_pos)
                    human_radius = hum[4]  # Human's radius
                    constraints.append(dist_to_human_sqr - (human_radius + robot_radius + 0.03) ** 2)  # Safety margin
            return constraints

        human_constraints = collision_constraint(X_pred, predicted_human_poses[0])

                    # Add collision avoidance constraints for humans
        for constr in human_constraints:
            opti.subject_to(constr >= 0)  # No collisions


        

        # Add static obstacle constraints
        


        total_cost = cost_function(X_pred, U_opt, predicted_human_poses[0])

            
        
        # Add control bounds
        opti.subject_to(U_opt[0, :] <= 0.5)  # Upper bound for v
        opti.subject_to(U_opt[0, :] >= 0)  # Lower bound for v
        opti.subject_to(U_opt[1, :] >= -1)
        opti.subject_to(U_opt[1, :] <= 1)
      

        # Minimize total cost
        opti.minimize(total_cost)

        

        #Set up the solver
        opti.solver('ipopt', {
            'ipopt.max_iter': 500,
            'ipopt.tol': 1e-12,
            'ipopt.acceptable_tol': 1e-12,
            'ipopt.acceptable_iter': 100,
            'ipopt.print_level': 0,
            'print_time': False
        })

        #opti.solver('ipopt')

        # Solve the optimization problem
        try:
            sol = opti.solve()
        except RuntimeError as e:
            print("Error")
            #logging.error(f"Solver failed with error: {e}")
            return (0,0) # Safe default action

        # Get the optimal control input for the first step
        u_mpc = sol.value(U_opt[:, 0]) 
        print(f"cost {sol.value(total_cost) }")
        print(f"U_opt {sol.value(U_opt) }")
        print(f"theta {robot_state.theta}")
        next_states = dynamics(x_inital,sol.value(U_opt))
        print(f"predicted positions {next_states}")
        print(np.sin(sol.value(U_opt[1,0])))
        print(f"U_value: {sol.value(U_opt[1, 0]):.20f}")
        print("x_inital", x_inital)

        #print(future_human_states)                                                                                                                 
                                                                                                                                                                         

        # print(Ut[:,0])
        u1 = f"{sol.value(U_opt[0, 0]):.20f}"
        u2 = f"{sol.value(U_opt[1, 0]):.20f}"

        # Convert formatted strings to float
        action = (float(u1), float(u2))

        #logging.info(f"Generated action: {action}")
        return action , next_states, future_human_states# Return the optimal control action