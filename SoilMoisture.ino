#define BLYNK_TEMPLATE_ID "TMPL33If-LaPC"
#define BLYNK_TEMPLATE_NAME "Soil Moisture"
#define BLYNK_AUTH_TOKEN "Pr5ASxYuTWnrVCCxjUaY3gMayNigKH7R"

#include <SPI.h>
#include <WiFi.h>
#include <BlynkSimpleWifi.h>

// WiFi credentials.
char ssid[] = "OnePlus Nord CE 2";  // WiFi network name
char pass[] = "ash12345";  // WiFi password

#define MOISTURE_SENSOR_PIN A0
#define RELAY_PIN 2

#define DRY_VALUE 854
#define WET_VALUE 438

BlynkTimer timer;

void sendMoistureData() {
  int rawValue = analogRead(MOISTURE_SENSOR_PIN);
  int moisturePercentage = map(rawValue, DRY_VALUE, WET_VALUE, 0, 100);
  moisturePercentage = constrain(moisturePercentage, 0, 100);
  Blynk.virtualWrite(V0, moisturePercentage);
}

BLYNK_WRITE(V1) {
  int pumpState = param.asInt();
  digitalWrite(RELAY_PIN, pumpState == 1 ? LOW : HIGH);
}

void setup() {
  pinMode(MOISTURE_SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH);

  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  timer.setInterval(2000L, sendMoistureData);
}

void loop() {
  Blynk.run();
  timer.run();
}
