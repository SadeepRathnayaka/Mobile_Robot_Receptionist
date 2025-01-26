# Mobile_Robot_Receptionist
 
## Robot-Elevator Interaction

This project aims to develop a mobile robot receptionist capable of interacting with its environment, including the ability to press elevator buttons autonomously. My role in this project focuses on **Robot-Elevator Interaction**, specifically designing and implementing a robotic arm for pressing elevator buttons.

## Project Goals
1. Design a 4-degree-of-freedom (DoF) robotic arm.
2. Integrate the robotic arm with the ROS 2 framework.
3. Implement motion planning and control using the MoveIt framework.
4. Realize hardware implementation for real-world operation.
5. Simulate button detection, localization, and robot arm control.

---

## Project Workflow

### 1. **Robotic Arm Design**
- Software: SolidWorks
- Objective: Design a compact and efficient 4-DoF robotic arm capable of precise movements to interact with elevator buttons.

### 2. **ROS 2 Integration**
- Setup ROS 2 nodes to control and monitor the robotic arm.
- Publish and subscribe to topics for real-time communication.
- Implement necessary drivers for seamless control.

### 3. **MoveIt Framework Integration**
- Plan and execute motion trajectories for the robotic arm using MoveIt.
- Ensure collision-free paths and smooth motion.
- Test simulations in RViz before hardware deployment.

### 4. **Simulation**
- Implement **Button Detection Nodes** to identify elevator buttons.
- Use **Button Localization Nodes** with a backward reverse perspective projection method to calculate the 3D pose of the button.
- Integrate **Robot Arm Control** with ROS 2 and MoveIt for motion planning and control.
- Test and validate the system in Gazebo simulated environment to ensure accurate button pressing.

### 5. **Hardware Implementation**
- Assemble and test the 4-DoF robotic arm with the mobile robot.
- Validate the system's performance by pressing elevator buttons in real-world scenarios.

---


## Tools and Frameworks
- **Design**: SolidWorks
- **Middleware**: ROS 2
- **Motion Planning**: MoveIt
- **Simulation**: RViz

---

Stay tuned for further updates as the project progresses.

