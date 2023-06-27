#include <Wire.h>
#include "DHT.h"
DHT dht;
void setup()
{
  Serial.begin(9600);
  Serial.println();
  Serial.println("Status\tHumidity (%)\tTemperature (C)");
  dht.setup(4); 
}

void loop() {
  float humidity = dht.getHumidity(); 
  float temperature = dht.getTemperature(); 

  Serial.print(dht.getStatusString());
  Serial.print("\t");
  Serial.print(humidity, 1);
  Serial.print("\t\t");
  Serial.println(temperature, 1);
  delay(500);
}
