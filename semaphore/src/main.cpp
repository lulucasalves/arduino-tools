#include <Arduino.h>

int controll = 'red';

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, INPUT);
}

void loop()
{
  if (controll == 'red')
  {
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);

    delay(3000);
    controll = 'green';
  }

  if (controll == 'yellow')
  {
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);

    delay(2000);
    controll = 'red';
  }

  if (controll == 'green')
  {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(3000);
    controll = 'yellow';
  }
}