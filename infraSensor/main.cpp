#include <IRremote.h>

int RECV_PIN = 3;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(10, OUTPUT);
}

void loop()
{

  if (irrecv.decode(&results))
  {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }

  switch (results.value)
  {
  case (0xFFFFFFFF):
  {
    digitalWrite(10, HIGH);
    break;
  }
  default:
  {
    digitalWrite(10, LOW);
    break;
  }
  }

  delay(100);
}