#include <DHT.h>

int SENSOR = 2;
int temp, humidity;

DHT dht (SENSOR, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {

 humedad = dht.readHumidity();
 temp = dht.readTemperature();
 Serial.print("Temperature: ");
 Serial.print(temp);
 Serial.print("ºC Humidity: ");
 Serial.print(humidity);
 Serial.println("%");
 delay(2000);
 }
