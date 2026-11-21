#include <ESP8266WiFi.h>

const char*ssid="Galaxy F14 5G 56E5";
const char*password="12345678";

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

WiFi.begin(ssid, password); 

while(WiFi.status() != WL_CONNECTED){
delay(200);
Serial.print(".");
}

Serial.println();
Serial.println("Wifi Connected");
}

void loop() {
  // put your main code here, to run repeatedly  
}
