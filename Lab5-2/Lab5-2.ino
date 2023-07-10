int LED[] = {9,10,11};

void setup() {
  // put your setup code here, to run once:
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  attachInterrupt(0, ledblink, RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<3; i++){
    digitalWrite(LED[i], HIGH);
    delay(1000);
    digitalWrite(LED[i], LOW);
    delay(1000);
  }
}

void ledblink(){
  digitalWrite(LED[0], HIGH);
  digitalWrite(LED[1], HIGH);
  digitalWrite(LED[2], HIGH);
  delay(1000);
}
