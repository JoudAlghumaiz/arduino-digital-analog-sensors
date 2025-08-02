# Arduino Digital and Analog Sensors

### **Overview**

This repository contains two separate projects that demonstrate the use of digital and analog sensors with an Arduino Uno. The first project uses a PIR (Passive Infrared) sensor to detect motion, while the second uses an LDR (Light Dependent Resistor) to measure ambient light levels.

### **1. Digital Sensor - PIR Motion Detector**

#### **Description**
This project uses a PIR sensor to detect motion. When motion is detected, an LED is turned on. When the motion stops, the LED is turned off.

#### **Components**
* Arduino Uno
* PIR Motion Sensor (e.g., HC-SR501)
* 1x LED
* 1x 220Ω Resistor
* Breadboard and Jumper Wires

#### **Circuit Diagram**
<img width="1440" height="729" alt="Motion Sensor PIR-Digital Sensor Circuit" src="https://github.com/user-attachments/assets/6ac1ac4f-eaf8-432c-a68a-9be4b8091574" />

The PIR sensor's VCC pin is connected to Arduino's 5V, GND to GND, and the OUT pin to Arduino's digital pin 7. The LED's anode (positive) is connected to Arduino's digital pin 13 via a 220Ω resistor, and its cathode (negative) is connected to GND.






###  **2. Arduino Analog Sensor - LDR Light Sensor

### **Description**

This project demonstrates the use of an Analog Light Dependent Resistor (LDR) sensor with an Arduino Uno. The circuit functions as an automatic night light, where an LED turns on when the ambient light level drops below a certain threshold.

### **Features**

* **Automatic Light Control:** Automatically turns an LED ON or OFF based on the surrounding light conditions.
* **Analog Reading:** Uses the Arduino's analog input to read a continuous range of values from the LDR sensor.
* **Voltage Divider Circuit:** The LDR is configured in a voltage divider circuit to provide a readable voltage to the Arduino.

### **Required Components**

* Arduino Uno Board
* LDR (Photoresistor)
* 1x 10kΩ Resistor (for the voltage divider)
* 1x LED
* 1x 220Ω Resistor (for the LED)
* Breadboard and Jumper Wires

### **Circuit Diagram**

<img width="1440" height="729" alt="Analog Sensor - LDR Light Sensor" src="https://github.com/user-attachments/assets/1e9694d5-6a37-4ac7-88ce-6e9c53418ffa" />


