#include <Arduino.h>

#define RED 12
#define GREEN 11
#define BLUE 10

void setup()
{

  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{
  analogWrite(RED, 255);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 255);
}