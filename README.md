# Generalized-Robotic-Injection
This repository provides the necessary drawings, code, and instructions to replicate a 3DOF robotic arm capable of simulated automatic injection. The robot utilizes an IP-Camera and ultrasonic sensor to detect injection sites through the MATLAB Computer Vision Toolbox and a control applet. 

## Video Demonstration









## Components
| Item                        | Manufacturer/Link                                                                                   | Price |
| --------------------------- | --------------------------------------------------------------------------------------------------- | ----- |
| 6-DOF Robotic Arm Kit       | [Diymore/Amazon](https://www.amazon.com/diymore-Aluminium-Mechanical-Robotic-Arduino/dp/B01LVVEP8K) | $50   |
| Arduino MEGA 2560           | [Elegoo](https://us.elegoo.com/products/elegoo-mega-2560-r3-board)                                  | $20   |
| 16-Channel Servo Shield     | [Adafruit](https://www.adafruit.com/product/1411)                                                   | $17   |
| ESP32-IPCamera              | [ai-thinker](https://www.amazon.com/Aideepen-ESP32-CAM-Bluetooth-ESP32-CAM-MB-Arduino/dp/B08P2578LV)| $10   |
| HC-SR04 Ultrasonic Sensor   | [Adafruit](https://www.adafruit.com/product/4007)                                                   | $4    |
| 5V DC Power Adapter         | [Waysse](https://www.amazon.com/Adapter-100V-240V-Charger-Speaker-Devices/dp/B08Z7GNDKT)            | $8    |
| Micro-USB Power Cable       | [MYFON](https://www.amazon.com/Charging-Transfer-Android-Trustable-MYFON/dp/B098DW7485)             | $6    |
| Jumper Wires                | [Elegoo](https://www.amazon.com/Elegoo-EL-CP-004-Multicolored-Breadboard-arduino/dp/B01EV70C78)     | $7    |
| Electrical Tape             | [Scotch](https://www.amazon.com/Scotch-Electrical-Tape-4-Inch-66-Foot/dp/B001ULCB1O)                | $4    |
|                             |                                                                                       **Total:** | **$126** |

## MATLAB
[Download & Install MATLAB](https://www.mathworks.com/help/install/ug/install-products-with-internet-connection.html)

Include the following toolboxes:
[Computer Vision Toolbox](https://www.mathworks.com/products/computer-vision.html), [MATLAB Support Package for IP Cameras](https://www.mathworks.com/matlabcentral/fileexchange/49824-matlab-support-package-for-ip-cameras)

Download the entire MATLAB folder from this repository. Set the current file in MATLAB as the downloaded folder. Reconfigure the MATLAB control applet's code to suit your project's needs and repackage it as an app as needed. 

## Arduino
[Download & Install Arduino IDE](https://www.arduino.cc/en/software)

Download the arm_command.ino file and upload it to the Arduino MEGA 2560 via Arduino IDE. 

## Integration
Follow the directions, schematics, and software descriptions laid out in the Project Overview document. %%

## Acknowlegements
This project utlized the robotic kit and [control software](https://github.com/smrLab/Robotic-Arm-Kit) from the [Smart Materials and Robotics Laboratory](https://smr.unl.edu/) at the [University of Nebraska-Lincoln Department of Mechanical and Materials Engineering](https://engineering.unl.edu/mme/). 

The following Arduino Libraries were used: [Adafruit PWM Servo Driver Library](https://github.com/adafruit/Adafruit-PWM-Servo-Driver-Library), [HC-SR04 Library](https://github.com/Martinsos/arduino-lib-hc-sr04)
