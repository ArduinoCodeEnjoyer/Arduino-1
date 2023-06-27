int SW = 6;
int LED = 5;
int SW_STATE = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SW, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  SW_STATE = digitalRead(SW);
  if(SW_STATE == HIGH){
     Serial.println("Hello!");
     digitalWrite(LED, HIGH); 
  }
  else{
    digitalWrite(LED, LOW);
    Serial.println("Goodbye");
  }
}
