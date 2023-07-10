int pin = 4;
void setup()
{
  Serial.begin(115200);
  pinMode(pin, OUTPUT);
  attachInterrupt(2, Blink, RISING);
}
void loop()
{
  digitalWrite(pin, LOW);
  Serial.println("LED OFF");
}
void Blink()
{
  Serial.println("Interrupt");
  Serial.println("LED ON");
  digitalWrite(pin, HIGH); 
}
