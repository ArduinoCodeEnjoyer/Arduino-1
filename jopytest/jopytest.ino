int gearposx[8] = {4, 2, 4, 0, 4, 0, 5, 0};
int gearposy[8] = {0, 2, 2, 2, 3, 3, 6, 6};
int CurGear;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int JoyX = analogRead(A0);
  int JoyY = analogRead(A1);
  JoyX = map(JoyX,150,1023,0,5);
  JoyY = map(JoyY,79,1023,0,6);
//  Serial.println(JoyX);
//  Serial.println(JoyY);
  if (JoyX == gearposx[0] and JoyY == gearposy[0]) {
    if (CurGear > -1) {
      CurGear = -1;
    }
    else if (CurGear < -1) {
      CurGear = -1;
    }
  }
  //N
  if (JoyX == gearposx[1] and JoyY == gearposy[1]) {
    if (CurGear > 0) {
      CurGear = 0;
    }
    else if (CurGear < 0) {
      CurGear = 0;
    }
  }
  //1
  if (JoyX == gearposx[2] and JoyY == gearposy[2]) {
    if (CurGear > 1) {
      CurGear = 1;
    }
    else if (CurGear < 1) {
      CurGear = 1;
    }
  }
  //2
  if (JoyX == gearposx[3] and JoyY == gearposy[3]) {
    if (CurGear > 2) {
      CurGear = 2;
    }
    else if (CurGear < 2) {
      CurGear = 2;
    }
  }
  //3
  if (JoyX == gearposx[4] and JoyY == gearposy[4]) {
    if (CurGear > 3) {
      CurGear = 3;
    }
    else if (CurGear < 3) {
      CurGear = 3;
    }
  }
  //4
  if (JoyX == gearposx[5] and JoyY == gearposy[5]) {
    if (CurGear > 4) {
      CurGear = 4;
    }
    else if (CurGear < 4) {
      CurGear = 4;
    }
  }
  //5
  if (JoyX == gearposx[6] and JoyY == gearposy[6]) {
    if (CurGear > 5) {
      CurGear = 5;
    }
    else if (CurGear < 5) {
      CurGear = 5;
    }
  }
  //6
  if (JoyX == gearposx[7] and JoyY == gearposy[7]) {
    if (CurGear > 6) {
      CurGear = 6;
    }
    else if (CurGear < 6) {
      CurGear = 6;
    }
  }
  Serial.println(CurGear);
  delay(50);
}
