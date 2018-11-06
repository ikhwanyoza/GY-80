# GY-80 x HC-05/06
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

----------------------------
Pairing BT Modul dengan perangkat Desktop (Windows)

1. sambungkan semua koneksi bt modul yang dibutuhkan
2. beri daya pada arduino yang terkoneksi bt modul
3. buka bluetooth setting
4. tambah perangkat baru
5. setalah bt modul ditemukan, lakukan pairing
6. apabila diminta password, masukkan password default 1234
7. apabila pairing berhasil, cek device and printers setting
8. properties pada perangkat bt modul yang telah di paring
9. cek serial COM yang telah di pairing
10. download PuTTY, disini : https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html
11. install, dan buka, pilih connection type : Serial
12. masukkan COM pada bt modul
13. click Open

--------------------------------
check the project running video here : https://youtu.be/gT_bU4wAG4c
