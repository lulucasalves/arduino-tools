int potenciometroPort = A1;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  potenciometroVal1 = analogRead(potenciometroPort);

  Serial.print("Total: ");

  delay(100);
}