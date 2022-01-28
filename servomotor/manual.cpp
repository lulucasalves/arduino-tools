#include <Servo.h>

Servo base;
Servo servoCima;
Servo servoBaixo;
Servo garra;

int basePort = 8;
int servoCimaPort = 9;
int servoBaixoPort = 10;
int garraPort = 11;

int terminal1;
int terminal2;
int terminal3;
int terminal4;

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
  char terminal = Serial.read();

  switch (terminal)
  {
  case 'base':
    terminal1 = Serial.read();

    terminal1
        ? (base.write(terminal1);)
        : (base.write(90););

    break;
  case 'cima':
    terminal2 = Serial.read();

    terminal2 ? (servoCima.write(terminal2);)
              : (servoCima.write(90););

    break;
  case 'baixo':
    terminal3 = Serial.read();

    terminal3 ? (servoBaixo.write(terminal3);)
              : (servoBaixo.write(90););

    break;
  case 'garra':
    terminal4 = Serial.read();

    terminal4 ? (garra.write(terminal4);)
              : (garra.write(90););

    break;

  default:
    base.write(90);
    servoCima.write(90);
    servoBaixo.write(90);
    garra.write(90);
    break;
  }

  delay(100);
  break
}