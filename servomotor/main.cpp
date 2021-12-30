#include <VarSpeedServo.h>

#define pinServo 2

VarSpeedServo servo1;

void setup()
{
  servo1.attach(pinServo);
  Serial.begin(9600);
}

void loop()
{
  int angulo = 179;
  // Angulo & velocidade max 180 max 255
  servo1.slowmove(angulo, 0);
  delay(1000);
  servo1.slowmove(90, 45);
  delay(1000);
  servo1.slowmove(0, 100);
  delay(1000);

  Serial.print(" angulo:");
  Serial.println(angulo);
}
