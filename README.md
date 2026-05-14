# ESP32 Blynk IoT Light Control

An IoT-based wireless light control system using ESP32, Blynk Cloud, and Wokwi simulation.

This project allows users to remotely control an LED using the Blynk mobile application through the internet.

---

# Project Overview

This project demonstrates real-time communication between ESP32 and the Blynk IoT platform.

The ESP32 connects to WiFi and communicates with the Blynk Cloud server.  
A virtual button created in the Blynk mobile app controls an LED connected to the ESP32.

The entire system is simulated using Wokwi IoT Simulator.

---

# Features

- Remote LED ON/OFF control
- Real-time mobile app interaction
- ESP32 WiFi connectivity
- Blynk Cloud integration
- Serial monitor debugging
- Wokwi simulation support
- IoT-based wireless automation

---

# Components Used

| Component | Quantity |
|---|---|
| ESP32 Dev Module | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Jumper Wires | Few |

---

# Circuit Connections

| Component | ESP32 Pin |
|---|---|
| LED Anode (+) | GPIO2 |
| LED Cathode (-) | GND (through 220Ω resistor) |

---

# Blynk Configuration

| Parameter | Value |
|---|---|
| Virtual Pin | V0 |
| Widget Type | Button |
| Mode | Switch |

---

# Working Principle

1. ESP32 connects to WiFi.
2. ESP32 authenticates with Blynk Cloud.
3. User presses the virtual button in the Blynk mobile app.
4. Blynk sends the command to ESP32 over the internet.
5. ESP32 turns the LED ON or OFF accordingly.
6. LED status is displayed in the serial monitor.

---

# Libraries Used

- WiFi.h
- WiFiClient.h
- BlynkSimpleEsp32.h

---

# Wokwi Simulation

This project was fully simulated using Wokwi IoT Simulator.

---

# Simulation Images

## Circuit Simulation

![Circuit Simulation](Simulation%20Images%20and%20Mobile%20App%20Screenshots/LED%20glowing.png)

---

## LED OFF Condition

![LED Turned OFF](Simulation%20Images%20and%20Mobile%20App%20Screenshots/LED%20Turned%20OFF.png)

---

## Blynk Mobile Dashboard

![Blynk Dashboard with button settings in a Android phone](Simulation%20Images%20and%20Mobile%20App%20Screenshots/Blynk%20dashboard%20with%20Button%20Setup.png)

---

## Button Press Detection

![Button notifying on pressing while being offline](Simulation%20Images%20and%20Mobile%20App%20Screenshots/Button%20working%20properly%20after%20button%20press.png)

---

## Serial Monitor Output

![Console Results](Simulation%20Images%20and%20Mobile%20App%20Screenshots/ConsoleResults.png)

---

# Serial Monitor Output Example

```text
ESP32 Connected to Blynk

LED State: 255
LED State: 0
```

---

# Applications

- Smart home automation
- Wireless appliance control
- IoT learning projects
- Remote lighting systems
- Cloud-connected embedded systems

---

# Future Improvements

- Multiple appliance control
- Voice assistant integration
- Mobile notifications
- Energy monitoring
- Relay module integration
- Home automation dashboard

---

# Author

Thejaswini C

---

# GitHub Repository Description

ESP32-based IoT light control system using Blynk Cloud and Wokwi simulation for real-time wireless LED control.
