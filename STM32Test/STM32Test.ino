void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 255; i++) {
    analogWrite(PC13, i);
    delay(10);
  }
  for (int i = 255; i <= 0; i++) {
    analogWrite(PC13, i);
    delay(10);
  }
}
