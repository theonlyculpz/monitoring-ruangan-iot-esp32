# Monitoring Ruangan Berbasis IoT Menggunakan ESP32

## 1. Deskripsi Project

Project ini merupakan sistem monitoring ruangan berbasis Internet of Things (IoT) yang menggunakan ESP32 sebagai mikrokontroler utama. Sistem ini menggunakan dua sensor, yaitu DHT22 dan LDR, untuk memantau suhu, kelembapan, dan kondisi cahaya ruangan.

## 2. Komponen yang Digunakan

### A. ESP32
ESP32 merupakan mikrokontroler yang berfungsi sebagai pusat pengendali sistem. ESP32 menerima dan memproses data dari sensor serta menghubungkan perangkat ke jaringan WiFi.

### B. Sensor DHT22
DHT22 digunakan untuk mengukur suhu dan kelembapan udara. Pada project ini, sensor DHT22 dihubungkan ke pin GPIO 4 pada ESP32.

### C. Sensor LDR
LDR digunakan untuk mendeteksi perubahan intensitas cahaya. Sensor menghasilkan keluaran digital berupa HIGH atau LOW dan dihubungkan ke pin GPIO 23 pada ESP32.

## 3. Alur Kerja Sistem

1. ESP32 dinyalakan dan melakukan inisialisasi sensor DHT22 serta LDR.
2. ESP32 mencoba menghubungkan perangkat ke jaringan WiFi.
3. DHT22 membaca suhu dan kelembapan ruangan.
4. LDR mendeteksi kondisi cahaya melalui keluaran digital.
5. ESP32 memproses hasil pembacaan kedua sensor.
6. Data ditampilkan melalui Serial Monitor setiap dua detik.

## 4. Hasil Pengujian

Berdasarkan pengujian, sensor DHT22 berhasil membaca suhu dan kelembapan ruangan. Sensor LDR berhasil mendeteksi perubahan kondisi cahaya melalui perubahan nilai HIGH dan LOW. ESP32 juga berhasil terhubung ke jaringan WiFi.

Contoh hasil pembacaan:
- Suhu: 24,10 °C
- Kelembapan: 56,80%
- Status cahaya: HIGH atau LOW
- Status WiFi: Terhubung

## 5. File Project

- `monitoring_ruangan.ino` — kode program utama ESP32.
