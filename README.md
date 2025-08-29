# Smart Home Automation Using ATmega32

This project implements a smart home system using **ATmega32** microcontroller with sensors and actuators for automation.  
It automatically controls lighting, fan speed, and fire alerts, while showing real-time status on an LCD.

## 🔧 Features
- **Automatic Lighting Control** with LDR sensor:
  - <15% → 3 LEDs ON (RGB)
  - 16–50% → Red + Green ON
  - 51–70% → Red ON
  - >70% → All OFF
- **Fan Speed Control** with LM35 + PWM:
  - <25°C → OFF
  - 25–30°C → 25% speed
  - 30–35°C → 50% speed
  - 35–40°C → 75% speed
  - ≥40°C → 100% speed
- **Fire Detection** with flame sensor:
  - LCD alert “Critical Alert!”
  - Buzzer ON
- **LCD Display**:
  - Row 1 → FAN status
  - Row 2 → Temp + LDR percentage

## 🖥️ Hardware
- ATmega32 @16 MHz
- Sensors: LM35, LDR, Flame Sensor
- Actuators: DC Motor + H-Bridge, RGB LEDs, Buzzer
- Display: 16x2 LCD (8-bit mode)


## 🚀 Demo
- 🔥 [Project Video](https://youtu.be/Iyj7sOfwYLw)
- 🔧 [Flame Sensor Test](https://youtu.be/cD3n-Bz7liM)


