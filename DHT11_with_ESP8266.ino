#include <DHT.h>

#define DHTPIN 5
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
float temperature=dht.readTemperature();
float humidity=dht.readHumidity();

Serial.print("Temperature=");
Serial.println(temperature);
Serial.print("Humidity=");
Serial.println(humidity);

delay(1000);
}
