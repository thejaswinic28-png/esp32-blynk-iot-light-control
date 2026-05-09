# ESP32 Blynk IoT Light Control

An IoT-based wireless light control system using ESP32, Blynk Cloud, and Wokwi simulation.  
This project allows users to control an LED remotely from a mobile application through the internet.

---

# Project Overview

This project demonstrates real-time IoT communication between:
- ESP32 microcontroller
- Blynk Cloud platform
- Mobile application dashboard

The LED connected to the ESP32 can be turned ON/OFF remotely using the Blynk mobile app.

---

# Features

- Wireless LED control using smartphone
- Real-time communication through Blynk Cloud
- ESP32 WiFi connectivity
- Mobile app dashboard control
- Wokwi online simulation support
- Serial monitor debugging
- Beginner-friendly IoT project

---

# Technologies Used

- ESP32
- Blynk IoT Platform
- Arduino Framework
- Wokwi Simulator
- WiFi Communication
- GitHub

---

# Components Required

| Component | Quantity |
| ESP32 Dev Board | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Jumper Wires | Few |
| Blynk Mobile App | 1 |

---

# Circuit Connections

| ESP32 Pin | Connected To |
|---|---|
| GPIO 2 | LED Positive via 220Ω resistor |
| GND | LED Negative |

---

# Blynk Configuration

## Template Details

```cpp
#define BLYNK_TEMPLATE_ID "TMPL3xDFac_G6"
#define BLYNK_TEMPLATE_NAME "ESP32 IoT Light Control"

Virtual Pin Used
V0
Widget Used
Button Widget
Mode: Switch
Datastream: V0
Working Principle
ESP32 connects to WiFi.
ESP32 connects to Blynk Cloud.
User presses button in Blynk mobile app.
Blynk sends command to ESP32.
ESP32 changes GPIO state.
LED turns ON or OFF.
Wokwi Simulation

This project was fully simulated using Wokwi.

Simulation includes:

ESP32
LED
Resistor
Blynk cloud communication
Serial Monitor Output

Example output:

ESP32 Connected to Blynk
LED State: 255
LED State: 0
LED State: 255
Project Structure
ESP32_Blynk_IoT_Light_Control/
│
├── sketch.ino
├── diagram.json
├── libraries.txt
├── wokwi-project.txt
│
├── Simulation Images/
│
└── Mobile App Screenshots/
Setup Instructions
1. Create Blynk Template
Open Blynk Console
Create new template
Hardware: ESP32
Connection Type: WiFi
2. Add Datastream

Create:

Virtual Pin: V0
Type: Integer
3. Add Device

Create device from template and copy:

Auth Token
4. Configure Mobile Dashboard

Add:

Button Widget
Datastream: V0
Mode: Switch
5. Run Simulation
Open project in Wokwi
Start simulation
Open Blynk mobile app
Control LED remotely
Applications
Smart Home Automation
Wireless Appliance Control
IoT Learning Projects
Cloud-Controlled Embedded Systems
Remote Monitoring and Control
Future Improvements
Relay Module Integration
Real Appliance Switching
Voice Assistant Integration
MQTT Communication
Sensor Integration
Web Dashboard
OTA Firmware Updates
Author

Thejaswini C

License

This project is open-source and available for learning and educational purposes.
