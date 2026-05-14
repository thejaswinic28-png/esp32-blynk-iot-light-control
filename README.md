# ESP32 Blynk IoT Light Control

An IoT-based wireless light control system using ESP32, Blynk Cloud, and Wokwi simulation.

This project demonstrates real-time remote LED control using a mobile application connected through the Blynk Cloud platform.

---

# Project Overview

The ESP32 connects to WiFi and communicates with the Blynk Cloud server.

Using the Blynk mobile application, users can remotely switch an LED ON or OFF through the internet. The entire hardware setup and testing are simulated in Wokwi.

---

# Features

- Remote LED ON/OFF control
- Blynk Cloud integration
- Mobile app dashboard control
- ESP32 WiFi communication
- Real-time serial monitor output
- Wokwi virtual simulation
- IoT-based wireless automation

---

# Components Used

| Component | Quantity |
|---|---|
| ESP32 Dev Board | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Jumper Wires | Few |

---

# Circuit Connections

| Component | ESP32 Pin |
|---|---|
| LED Anode (+) | GPIO2 |
| LED Cathode (-) | GND through 220Ω resistor |

---

# Blynk Configuration

| Setting | Value |
|---|---|
| Template Name | ESP32 IoT Light Control |
| Platform | Blynk Cloud |
| Virtual Pin | V0 |
| Widget Type | Button |
| Button Mode | Switch |

---

# Working Principle

1. ESP32 connects to WiFi.
2. ESP32 authenticates with Blynk Cloud.
3. User presses the virtual button in the Blynk mobile app.
4. Blynk sends data to ESP32 over the internet.
5. ESP32 turns the LED ON or OFF.
6. LED status is displayed in the serial monitor.

---

# Libraries Used

```cpp
WiFi.h
WiFiClient.h
BlynkSimpleEsp32.h
```

---

# Wokwi Simulation

This project was developed and tested using the Wokwi IoT simulator.

---

# Simulation Images

## LED Glowing Condition

![LED Glowing](Simulation%20Images%20and%20Mobile%20App%20Screenshots/LED%20glowing.png)

---

## LED Turned OFF Condition

![LED OFF](Simulation%20Images%20and%20Mobile%20App%20Screenshots/LED%20Turned%20OFF.png)

---

## Blynk Mobile Dashboard

![Blynk Dashboard](Simulation%20Images%20and%20Mobile%20App%20Screenshots/Blynk%20dashboard%20with%20Button%20Settings%20in%20a%20Android%20phone.jpeg)

---

## Button Working Properly After Device Online

![Button Working](Simulation%20Images%20and%20Mobile%20App%20Screenshots/Button%20working%20properly%20after%20being%20online.jpeg)

---

## Button Press Notification While Offline

![Offline Notification](Simulation%20Images%20and%20Mobile%20App%20Screenshots/Button%20notifying%20on%20pressing%20while%20being%20Offline.jpeg)

---

## Serial Monitor Console Output

![Console Output](Simulation%20Images%20and%20Mobile%20App%20Screenshots/ConsoleResults.png)

---

# Serial Monitor Output Example

```text
ESP32 Connected to Blynk

LED State: 255
LED State: 0
LED State: 255
```

---

# Applications

- Smart home automation
- Wireless lighting systems
- IoT learning projects
- Cloud-connected embedded systems
- Remote appliance control

---

# Future Improvements

- Multi-device control
- Relay module integration
- Voice assistant support
- Energy monitoring system
- Sensor-based automation

---

# Author

Thejaswini C

---

# GitHub Repository Description

ESP32-based wireless IoT light control system using Blynk Cloud and Wokwi simulation for real-time mobile-controlled automation.
