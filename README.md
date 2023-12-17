# Automatic-Street-Light-using-LDR-Sensor

### Project 
- Automatic street lights with LDR (Light Dependent Resistor) sensors or what are often called light sensors, are street lighting systems designed to automatically regulate the intensity of light based on ambient light levels.
- This project was done by 6 people

### How it works? 
- LDR sensors are placed on street lights and detect ambient light levels. When the sunlight is still bright, the LDR resistance is low due to the high light to save energy. Conversely, at night, when sunlight is reduced or absent, LDR resistance increases.
- The system is designed to turn on when the input read on the light sensor is less than 200 lux and will turn off when the light intensity is more than 200 lux.

  ![My Image](2.png)
  
---
### Hardware Use
- Arduino Uno
- LDR Sensor
- LCD
- Battery
- Breadboard
  
## The Hardware Design
![My Image](1.png)


## Calibration
Prototype calibration aims to check and regulate the accuracy of a tool by comparing the tool with a nationally or internationally recognized standard or certified reference material. To measure the ability of the LDR sensor and system to detect light, it is necessary to calibrate it under different conditions. This calibration is needed to find out whether the LDR sensor can work properly or not. Below is the calibration data from the tool with 3 different variations and 5 repetitions processed with Microsoft Excel:
- CONDITION 1: The LDR and Lux ​​Meter sensors are exposed to red light

  ![My Image](3.png)
  
- CONDITION 2: The LDR and Lux ​​Meter sensors are exposed to yellow light

  ![My Image](4.png)
  
- CONDITION 3: Room lights go out during the day

  ![My Image](5.png)

## The Demo
A miniature demonstration of the tool is carried out when the final prototype has been completed. The main focus of this test is to compare the values ​​from the LDR sensor with the Lux Meter in real time. In this test, 3 variations of light intensity were carried out using a flashlight. The following is the resulting data:

![My Image](6.png)
