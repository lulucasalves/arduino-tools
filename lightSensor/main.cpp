#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  float lrp = analogRead(A0);
  Serial.println(lrp);

  if (lrp < 250)
  {
    digitalWrite(10, HIGH);
  }
  else
  {
    digitalWrite(10, LOW);
  }

  delay(5000);
}
