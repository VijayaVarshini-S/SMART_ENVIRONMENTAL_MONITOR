# SMART_ENVIRONMENTAL_MONITOR
Arduino-based Smart Environmental Monitor with real-time Temperature, Humidity, Soil Moisture and Light Intensity monitoring . 
# Smart Environmental Monitor 🌡️🌱💡

An Arduino-based real-time environmental monitoring system with fire detection capability.

![Project Banner](IMAGES/HARDWARE.jpg)

## Features
- Temperature & Humidity monitoring (DHT11)
- Soil Moisture sensing
- Light Intensity (LDR)
- Fire Detection (temperature/light spike alert)
- Real-time display on 16x2 LCD + Serial Monitor
- Low-cost and easy to deploy

## Hardware Components
- Arduino Uno
- DHT11 Sensor
- Soil Moisture Sensor
- LDR (Light Dependent Resistor)
- 16x2 LCD with I2C Module
- Breadboard & Jumper wires

## Circuit Diagram
![Circuit](CIRCUIT/CIRCUIT DIAGRAM.jpg)

## PCB diagram
![PCB](CIRCUIT/PCB.jpg)

## How to Use

1. Clone the repository
2. Open `CODE/smart_environmental_monitor.ino` in Arduino IDE
3. Install required libraries:
   - DHT sensor library ( By Frank de Brabander )
   - LiquidCrystal_I2C ( By Adafruit )
4. Upload the code to Arduino Uno
5. Monitor values on Serial Monitor or LCD

## Project Report
Full detailed report available in [`REPORT/SMART_ENVIRONMENTAL_MONITOR.pdf`](REPORT/SMART_ENVIRONMENTAL_MONITOR.pdf)


## License
This project is open-sourced under the MIT License.
