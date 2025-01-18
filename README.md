# 🌱 IoT-Based Smart Irrigation System  

**An automated irrigation solution using IoT, designed to monitor soil moisture levels and control water supply efficiently.**  
This project leverages **Arduino Uno R4 WiFi**, **soil moisture sensors**, and the **Blynk app** to automate irrigation, conserve water, and reduce manual intervention.

---

## 📋 Project Overview  

In traditional farming, overwatering or under-watering often leads to water wastage and reduced crop yields. This project addresses these challenges by introducing a **smart irrigation system** that:  
- Monitors **real-time soil moisture levels**.  
- Automates the **control of a water pump** based on soil conditions.  
- Provides **remote monitoring and control** through the **Blynk app**.

---

## 💡 Features  
- **Automated Water Pump Control**: Water is supplied only when the soil moisture is below a certain threshold.  
- **Real-Time Monitoring**: Displays soil moisture percentage on the **Blynk app**.  
- **Remote Control**: Allows users to manually turn the water pump ON/OFF via the app.  
- **Water Conservation**: Optimizes irrigation and minimizes wastage.  
- **Scalability**: Can be expanded to larger farms by adding more sensors and integrating advanced technologies.

---

## 🛠️ Components  

### **Hardware Components**  
1. **Arduino Uno R4 WiFi**  
   - Microcontroller with built-in Wi-Fi for IoT connectivity.  
2. **Soil Moisture Sensor**  
   - Measures soil moisture levels (outputs analog values).  
3. **5V Relay Module**  
   - Acts as a switch to control the high-voltage water pump.  
4. **Water Pump**  
   - Supplies water to the soil.  
5. **Power Source**  
   - USB or external power supply for Arduino and components.  

### **Software Components**  
1. **Arduino IDE**  
   - Used to write and upload code to the Arduino board.  
2. **Blynk App**  
   - IoT platform for real-time monitoring and control.  
3. **Wi-Fi Network**  
   - Enables communication between Arduino and the Blynk app.  

---

## 🔄 How It Works  

1. The **soil moisture sensor** reads the soil's moisture level and sends an analog signal to the Arduino.  
2. The Arduino processes the data, converts it into a percentage, and sends the value to the **Blynk app**.  
3. If the soil moisture level is below the defined threshold, the Arduino **activates the relay** to turn ON the water pump.  
4. The water pump supplies water until the soil moisture reaches the threshold, at which point the relay is deactivated.  
5. Users can monitor the system and manually control the pump using the Blynk app.  

---

## 🖥️ Circuit Diagram

![Circuit Diagram](./Screenshots/circuit diagram.jpg)

