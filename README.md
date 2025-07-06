# ECG
A ECG(electrocardiogram) machine, which is compact and budget friendly and useful for anyone having heart related issues or in general. 
It uses a AD8232 to get the data from the ECG sensor and then process it on a esp32 and then display it on a 2.8 inch TFT display, it has some optional buttons also to change functions or format.

The ECG waveform scrolls across the display in realtime, showing the heartbeat line like you see in hospitals and even beep on every heartbeat to make it more interactive. It can also show heart rate, it's cool and does what it's supposed to do.

## Why ECG machine
I have PSVT ( I am going to get the right treatment soon ) but I wanted to build something useful and practical and that could help someone. anyone can keep this in there home and use it at times of emergency or just normally.
I also wanted to make something that is easy to recreate so if someone wants to build this, they can easily do it with the right parts.

## What it do?
the machine shows a real-time ECG graph on the display. It read the signals from your heart using the ECG sensor 
- draws the heartbeat line
-  it also shows Heart Rate (BPM)
-  a small beep sound on every heartbeat
-   saving the data or sending it to your phone ( future addon )

### 3D Render
![ECG v1 v1](https://github.com/user-attachments/assets/e4a2def5-daf6-4924-b13a-e31f8e0cd97c)
![ECG v1 2](https://github.com/user-attachments/assets/a707939a-ca78-4c54-b93d-79358613940c)
![ECG v1 3](https://github.com/user-attachments/assets/33ebc38c-db21-4870-ac13-5991df8d5550)
![ECG v1 4](https://github.com/user-attachments/assets/950155bb-37f2-47bf-a3e0-4398803a1d4f)
### Wiring Diagram
![ecg](https://github.com/user-attachments/assets/a469c651-9b0e-4c8b-b77d-a8173f1eddfd)



## BOM
| Item                           | INR      | USD         |
| ------------------------------ | -------- | ----------- |
| Display                        | ₹543     | \$6.24      |
| Push Switch                    | ₹28      | \$0.32      |
| AD8232 (ECG Sensor)            | ₹305     | \$3.51      |
| ECG Electrodes (5-pack)        | ₹52.54   | \$0.60      |
| Battery Holder                 | ₹17      | \$0.20      |
| Screws                         | ₹40      | \$0.46      |
| ESP32 WROOM Devkit             | ₹328     | \$3.77      |
| Li-Ion Cell (18650)            | ₹120     | \$1.38      |
| TP4056 Charging Module         | ₹30      | \$0.34      |
| Taxes                          | ₹260     | \$2.99      |
| 3D Printed Case                | ₹0       | \$0.00      |
| Misc (Wires, buzzer, resistor) | ₹300     | \$3.45      |
| **Total**                      | ₹2023.54 | **\$23.26** |

