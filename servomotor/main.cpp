#include <Servo.h>

Servo base;
Servo servoCima;
Servo servoBaixo;
Servo garra;

void setup()
{
  base.attach(8);
  servoCima.attach(9);
  servoBaixo.attach(10);
  garra.attach(11);

  Serial.begin(9600);
}

void loop()
{
  int pos[4] = {90, 175, 70, 80};

  base.write(pos[0]);
  servoCima.write(pos[1]);
  servoBaixo.write(pos[2]);
  garra.write(pos[3]);

  delay(1000);

  int pos4[4] = {90, 175, 90, 40};

  base.write(pos4[0]);
  servoCima.write(pos4[1]);
  servoBaixo.write(pos4[2]);
  garra.write(pos4[3]);

  delay(3000);

  int pos2[4] = {0, 100, 180, 40};

  base.write(pos2[0]);
  servoCima.write(pos2[1]);
  servoBaixo.write(pos2[2]);
  garra.write(pos2[3]);

  delay(1000);
  int pos3[4] = {0, 100, 180, 80};

  base.write(pos3[0]);
  servoCima.write(pos3[1]);
  servoBaixo.write(pos3[2]);
  garra.write(pos3[3]);

  delay(3000);
}