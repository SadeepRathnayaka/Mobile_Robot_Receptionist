 ## Robot-Elevator Interaction

This project aims to develop a mobile robot receptionist capable of interacting with its environment, including the ability to press elevator buttons autonomously. My role in this project focuses on **Robot-Elevator Interaction**, specifically designing and implementing a robotic arm for pressing elevator buttons.

## Robot-Elevator Interaction Section Goals
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


https://github.com/user-attachments/assets/c5e8e2c5-e56a-4545-b5b4-3894bc700e37



### 2. **ROS 2 Integration**
- Setup ROS 2 nodes to control and monitor the robotic arm.
- Publish and subscribe to topics for real-time communication.
- Implement necessary drivers for seamless control.


[Screencast from 01-27-2025 02:17:09 AM.webm](https://github.com/user-attachments/assets/6421cb6e-5523-4d52-842b-d70d335577a6)

### 3. **MoveIt Framework Integration**
- Plan and execute motion trajectories for the robotic arm using MoveIt.
- Ensure collision-free paths and smooth motion.
- Test simulations in RViz before hardware deployment.


https://github.com/user-attachments/assets/ba46da28-fc28-4cd7-97c0-60d0ff105ee1


### 4. **Simulation**
- Implement **Button Detection Nodes** to identify elevator buttons.
- Use **Button Localization Nodes** with a backward reverse perspective projection method to calculate the 3D pose of the button.
- Integrate **Robot Arm Control** with ROS 2 and MoveIt for motion planning and control.
- Test and validate the system in Gazebo simulated environment to ensure accurate button pressing.

In the following video, the marker is considered as the button.

https://github.com/user-attachments/assets/29467f63-522f-4bb4-88d2-43e3fa13fe7b




### 5. **Hardware Implementation**
- Assemble and test the 4-DoF robotic arm with the mobile robot.
- Validate the system's performance by pressing elevator buttons in real-world scenarios.


https://github.com/user-attachments/assets/29ea4b6a-248b-4f6b-83d9-3741f0d257d9


https://github.com/user-attachments/assets/49e7dda4-f1a1-42ac-9850-aa023777fc52



---


## Tools and Frameworks
- **Design**: SolidWorks
- **Middleware**: ROS 2
- **Motion Planning**: MoveIt2
- **Simulation**: Gazebo, RViz

---

Stay tuned for further updates as the project progresses.

