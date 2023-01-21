#include <Arduino.h>
#include <Wire.h>

#include "wificonnect.h"

/* Put your SSID & Password */
const char* ssid;  // Enter SSID here
const char* password;  //Enter Password here
const char* deviceName;

void setup() {
  // put your setup code here, to run once:
   /*  Common cathode led RGB */
  Serial.begin(115200);

  //  Connecting to wifi -----------------------
  ssid = "Puzzle24";  // Enter SSID here
  password = "gzcmb94463";  // Enter Password here
  deviceName = "Sensor Pompa"; // DHCP Hostname (useful for finding device for static lease)
  wificonnect(ssid, password, deviceName);

  Serial.println(WiFi.gatewayIP());
}

void loop() {
  // put your main code here, to run repeatedly:
}