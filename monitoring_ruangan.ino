
#include <WiFi.h>
#include "DHT.h"

// Konfigurasi WiFi
const char* ssid = "theC";
const char* password = "julpasweet1e";

// Konfigurasi DHT22
#define DHTPIN 4
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

// Konfigurasi LDR
#define LDRPIN 23

void setup() {
  Serial.begin(115200);

  dht.begin();
  pinMode(LDRPIN, INPUT);

  // Menghubungkan ESP32 ke WiFi
  Serial.println("Menghubungkan ke WiFi...");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi berhasil terhubung!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  float suhu = dht.readTemperature();
  float kelembapan = dht.readHumidity();

  int cahaya = digitalRead(LDRPIN);

  Serial.println("\n=== MONITORING RUANGAN ===");

  if (isnan(suhu) || isnan(kelembapan)) {
    Serial.println("DHT22 gagal membaca data!");
  } else {
    Serial.print("Suhu: ");
    Serial.print(suhu);
    Serial.println(" C");

    Serial.print("Kelembapan: ");
    Serial.print(kelembapan);
    Serial.println(" %");
  }

  Serial.print("Status Cahaya LDR: ");
  Serial.println(cahaya == HIGH ? "HIGH" : "LOW");

  Serial.print("Status WiFi: ");
  Serial.println(WiFi.status() == WL_CONNECTED ?
                 "Terhubung" : "Terputus");

  Serial.println("==========================");

  delay(2000);
}
