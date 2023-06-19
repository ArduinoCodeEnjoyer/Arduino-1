int pin5 = 5;
int pin4 = 4;
int pin3 = 3;
int pin2 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin5, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin5, HIGH);
  delay(1000);
  digitalWrite(pin5, LOW);
  delay(1000);
  digitalWrite(pin4, HIGH);
  delay(1000);
  digitalWrite(pin4, LOW);
  delay(1000);
  digitalWrite(pin3, HIGH);
  delay(1000);
  digitalWrite(pin3, LOW);
  delay(1000);
  digitalWrite(pin2, HIGH);
  delay(1000);
  digitalWrite(pin2, LOW);
  delay(1000);
}
