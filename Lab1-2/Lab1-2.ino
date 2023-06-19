int R = 9;
int G = 10;
int B = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(R, 255);
  analogWrite(G, 0);
  analogWrite(B, 0);
  delay(1000);
  analogWrite(R, 0);
  analogWrite(G, 255);
  analogWrite(B, 0);
  delay(1000);
  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 255);
  delay(1000);
  analogWrite(R, 0);
  analogWrite(G, 255);
  analogWrite(B, 255);
  delay(1000);
  analogWrite(R, 255);
  analogWrite(G, 255);
  analogWrite(B, 0);
  delay(1000);
  analogWrite(R, 255);
  analogWrite(G, 0);
  analogWrite(B, 255);
  delay(1000);
  analogWrite(R, 255);
  analogWrite(G, 255);
  analogWrite(B, 255);
}
