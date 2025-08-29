# 🏠 Smart Home Automation Using ATmega32  

<p align="center">
  <img src="https://img.shields.io/badge/Microcontroller-ATmega32-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Language-C-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Platform-Embedded-green?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Simulation-Proteus-lightgrey?style=for-the-badge"/>
</p>  

A **Smart Home Automation System** built with an **ATmega32 microcontroller** that automatically controls lighting, fan speed, and fire detection.  
Real-time status is displayed on a 16x2 LCD.  

---

## ✨ Features  

- 💡 **Automatic Lighting Control** with LDR  
  - <15% → 3 LEDs ON (RGB)  
  - 16–50% → Red + Green ON  
  - 51–70% → Red ON  
   >70% → All OFF  

- 🌡️ **Fan Speed Control** with LM35 + PWM  
  - <25°C → Fan OFF  
  - 25–30°C → 25% speed  
  - 30–35°C → 50% speed  
  - 35–40°C → 75% speed  
  - ≥40°C → 100% speed  

- 🔥 **Fire Detection & Safety**  
  - Flame sensor detects fire  
  - Buzzer ON + LCD shows `Critical Alert!`  

- 📟 **LCD Display**  
  - Row 1 → FAN Status (`ON` / `OFF`)  
  - Row 2 → Temperature & Light Intensity  

---

## 🖥️ Hardware Components  

- **Microcontroller:** ATmega32 @ 16 MHz  
- **Sensors:** LM35 (Temperature), LDR (Light), Flame Sensor  
- **Actuators:** DC Motor (fan) + H-Bridge, RGB LEDs, Buzzer  
- **Display:** 16x2 LCD (8-bit mode)  

---

---

## 🚀 Demo  

🎥 [Full Project Video](https://youtu.be/Iyj7sOfwYLw)  
🔥 [Flame Sensor Test](https://youtu.be/cD3n-Bz7liM)  

---

## ⚙️ System Architecture  

```mermaid
flowchart TD
    LDR[LDR Sensor] --> |ADC| MCU[ATmega32]
    LM35[Temperature Sensor] --> |ADC| MCU
    Flame[Flame Sensor] --> MCU
    MCU --> LCD[LCD 16x2]
    MCU --> LEDs[RGB LEDs]
    MCU --> Motor[DC Motor + H-Bridge]
    MCU --> Buzzer[Buzzer]


