#include <Servo.h>

Servo base;
Servo servoCima;
Servo servoBaixo;
Servo garra;

int basePort = 8;
int servoCimaPort = 9;
int servoBaixoPort = 10;
int garraPort = 11;

void setup()
{
  base.attach(basePort);
  servoCima.attach(servoCimaPort);
  servoBaixo.attach(servoBaixoPort);
  garra.attach(garraPort);

  Serial.begin(9600);
}

void loop()
{
  base.write(90);
  servoCima.write(90);
  servoBaixo.write(90);
  garra.write(90);

  delay(100);
  break
}