#include <Arduino.h>

void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  tone(10, 2500, 100);

  delay(1000);
}