int A[8] = {0, 1, 2, 3, 4, 5, 6, 7};
int PWMA = 11;
int MA1 = 9;
int MA2 = 10;
int PWMB = 3;
int MB1 = 6;
int MB2 = 5;
int STBY = 8;
int Speed, SlowSpeed, ACCSpeed;
int PreError;
int Integral;
int LeftSpeed;
int RightSpeed;
int MotorSpeed = 100;
int LSpeed;
int RSpeed;
int SW = 12;
int SW_TEMP;

int FilterError;
const float alpha = 0.075;
int refl = 196;
int refc = 232;
int refr = 249;
int Error;

#define Kp 175
#define Ki 0
#define Kd 175

int l;
int c;
int r;

uint32_t counter = 0;

void setup() {
  Serial.begin(9600);
  pinMode(PWMA, OUTPUT);
  pinMode(MA1, OUTPUT);
  pinMode(MA2, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(MB1, OUTPUT);
  pinMode(MB2, OUTPUT);
  pinMode(STBY, OUTPUT);
  pinMode(SW, INPUT_PULLUP);
  
  digitalWrite(STBY, HIGH); //disable standby
  digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);  
  //Forward(Speed, 1000);
//  int SW_TEMP = 1;
  delay(500);
  Serial.println("Test");
  SW_TEMP = 1;
  while(SW_TEMP == 1){
    SW_TEMP = digitalRead(SW);
    Serial.println(SW_TEMP);
  }
  Serial.println("Pass");
//  while(true){
//    A[0] = analogRead(0);
//    A[1] = analogRead(1);
//    A[2] = analogRead(2);
//    CalError();
//    Serial.print(l);
//    Serial.print("  ");
//    Serial.print(c);
//    Serial.print("  ");
//    Serial.print(r);
//    Serial.print("  ");
//    Serial.println();
//    Forward(300, 0);
//    SW_TEMP = digitalRead(SW);
//    Serial.println(SW_TEMP);
//  }
  
  //MotorStop();
}
void loop() {
  simpletrack(125);
}
