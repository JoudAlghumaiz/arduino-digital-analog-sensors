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

#### **Arduino Code**
```cpp
// Pin definitions
const int pirSensorPin = 7;     // PIR sensor connected to pin 7
const int ledPin = 13;          // LED connected to pin 13

void setup() {
  // Pin setup
  pinMode(pirSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read the state of the PIR sensor
  int sensorValue = digitalRead(pirSensorPin);

  // Check if motion is detected
  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn LED ON
  } else {
    digitalWrite(ledPin, LOW);  // Turn LED OFF
  }
  
  delay(100);
}
