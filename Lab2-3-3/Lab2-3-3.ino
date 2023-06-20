int R = 9;
int G = 10;
int B = 11;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);
  if (Serial.available () >0) {
    char In = Serial.read();
    if (In == 'a'){
      digitalWrite(R, HIGH);
      digitalWrite(G, LOW);
      digitalWrite(B, LOW);
      delay(1500);
    }
    else if(In == 's'){
      digitalWrite(G, HIGH);
      digitalWrite(R, LOW);
      digitalWrite(B, LOW);
      delay(1500);
    }
    else if(In == 'd'){
      digitalWrite(B, HIGH);
      digitalWrite(G, LOW);
      digitalWrite(R, LOW);
      delay(1500);
    }
    else if(In == 'f'){
      digitalWrite(R, HIGH);
      digitalWrite(G, HIGH);
      digitalWrite(B, HIGH);
      delay(1500);
    }
  }
}
