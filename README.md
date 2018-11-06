# GY-80
gy-80 sensor code
--------------------------
PREREQUISITE

Arduino dan Arduino IDE

Arduino yang digunakan pada project ini adalah arduino uno. berikut beberapa hal yang perlu dipersiapkan sebelum memulai development :
 
 - Arduino IDE atau test editor yang kompatibel dengan Arduino.
 - Wire Library, preinstalled pada Arduino IDE
 - Adafruit Sensor Master, dapat didownload disini : https://github.com/adafruit/Adafruit_Sensor
 - Adafruit Sensor ADXL345, dapat didownload disini : https://github.com/adafruit/Adafruit_ADXL345

GY-80 10 DOF 9 Axis Module

modul sensor ini digunakan sebagai sensor pada project ini, menggunakan accelerometer untuk menangkap koordinat sumbu x,y, dan z 

Bluetooth Module HC-05/06

modul bluetooth ini dgunakan sebagai modul wireless untuk membuat koneksi bluetooth antara arduino dengan perangkat berbasis bluetooth lainnya

---------------------------
Koneksi masing-masing modul

GY-80 -- Arduino

VCC -- VCC 5v
GND -- GND
SDA -- A4
SCL -- A5

HC-05/06 -- Arduino

VCC -- VCC 3.3V
GND -- GND
TX -- RX
RX -- TX
