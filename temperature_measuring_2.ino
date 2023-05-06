#include "DHT.h"
#define Type DHT11
int sensePin=2;
DHT HT(sensePin,Type);
int humidity;
int tempC;
int tempF;
int setTime=500;
int dt=1000;


void setup() {

  Serial.begin(9600);
  HT.begin();
  delay(setTime);
  

}

void loop() {
  // put your main code here, to run repeatedly:
humidity=HT.readHumidity();
tempC=HT.readTemperature();
tempF=HT.readTemperature(true);

Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print("% Temperature ");
Serial.print(tempC);
Serial.print(" C ");
Serial.print(tempF);
Serial.println(" F ");
delay(dt);





}
