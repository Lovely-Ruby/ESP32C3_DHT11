# ESP32c3 + DHT11

![Blender Version](https://img.shields.io/badge/macOS-Sonoma14.4.1-green)

![Three.js Version](https://img.shields.io/badge/Vscode-编辑器-orange)
![Vue Version](https://img.shields.io/badge/PlatformIO_IDE-插件-blue)



# Preview

![image](https://github.com/user-attachments/assets/6fd64480-e491-4d7f-ae06-23253e6cbde0)

# Use

- ESP32c3
- DHT11

# 单片机连接传感器

| 杜邦线两端连接                   | 说明                                                                |
| -------------------------------- | ------------------------------------------------------------------- |
| 传感器 `VCC` ==> 开发板`3.3v`    | 传感器供电的                                                        |
| 传感器 `DATA` ==> 开发板`GPIO01` | data 可以连接 io 口的任何一个，随后会在代码里声明好就可以拿到数据了 |
| 传感器 `GND` ==> 开发板`GND`     | 接地                                                                |
