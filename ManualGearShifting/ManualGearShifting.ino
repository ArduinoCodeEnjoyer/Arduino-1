uint8_t buf[8] = {0};
#define DefGear 0;
int Clutch = 36;
int CurGear, Prev_Gear, pos;
int JoyX = A0;
int JoyY = A1;
int JoySW = 23;

void setup() {
  Serial.begin(9600);
  pinMode(Clutch, INPUT_PULLUP);
  pinMode(JoySW, INPUT_PULLUP);
}

void ShiftUp() {
  buf[2] = 20;
  Serial.write(buf, 8);
  KeyRelease();
}

void ShiftDown() {
  buf[2] = 8;
  Serial.write(buf, 8);
  KeyRelease();
}

void KeyRelease() {
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8);
}

void loop() {
  /*
     if(digitalRead(Joy_SW) == HIGH and analogRead(Joy_X) == pos and analogRead(Joy_Y) == pos){
      while(CurGear > Def_Gear){
        CurGear =- 1;
        ShiftDown();
      }
    }
  */

  if (digitalRead(Clutch) == HIGH) {
    //Reverse
    if (analogRead(JoyX) == pos and analogRead(JoyY) == pos) {
      if (CurGear > -1) {
        for (int i = CurGear; i == -1; i--) {
          ShiftDown();
          delay(100);
        }
        CurGear = -1;
      }
      else if (CurGear < -1) {
        for (int i = CurGear; i == -1; i++) {
          ShiftUp();
          delay(100);
        }
        CurGear = -1;
      }
    }
  }
  //N
  if (analogRead(JoyX) == pos and analogRead(JoyY) == pos) {
    if (CurGear > 0) {
      for (int i = CurGear; i == 0; i--) {
        ShiftDown();
        delay(100);
      }
      CurGear = 0;
    }
    else if (CurGear < 0) {
      for (int i = CurGear; i == 0; i++) {
        ShiftUp();
        delay(100);
      }
      CurGear = 0;
    }
  }
  //1
  if (analogRead(JoyX) == pos and analogRead(JoyY) == pos) {
    if (CurGear > 1) {
      for (int i = CurGear; i == 1; i--) {
        ShiftDown();
        delay(100);
      }
      CurGear = 1;
    }
    else if (CurGear < 1) {
      for (int i = CurGear; i == 1; i++) {
        ShiftUp();
        delay(100);
      }
      CurGear = 1;
    }
  }
  //2
  if (analogRead(JoyX) == pos and analogRead(JoyY) == pos) {
    if (CurGear > 2) {
      for (int i = CurGear; i == 2; i--) {
        ShiftDown();
        delay(100);
      }
      CurGear = 2;
    }
    else if (CurGear < 2) {
      for (int i = CurGear; i == 2; i++) {
        ShiftUp();
        delay(100);
      }
      CurGear = 2;
    }
  }
  //3
  if (analogRead(JoyX) == pos and analogRead(JoyY) == pos) {
    if (CurGear > 3) {
      for (int i = CurGear; i == 3; i--) {
        ShiftDown();
        delay(100);
      }
      CurGear = 3;
    }
    else if (CurGear < 3) {
      for (int i = CurGear; i == 3; i++) {
        ShiftUp();
        delay(100);
      }
      CurGear = 3;
    }
  }
  //4
  if (analogRead(JoyX) == pos and analogRead(JoyY) == pos) {
    if (CurGear > 4) {
      for (int i = CurGear; i == 4; i--) {
        ShiftDown();
        delay(100);
      }
      CurGear = 4;
    }
    else if (CurGear < 4) {
      for (int i = CurGear; i == 4; i++) {
        ShiftUp();
        delay(100);
      }
      CurGear = 4;
    }
  }
  //5
  if (analogRead(JoyX) == pos and analogRead(JoyY) == pos) {
    if (CurGear > 5) {
      for (int i = CurGear; i == 5; i--) {
        ShiftDown();
        delay(100);
      }
      CurGear = 5;
    }
    else if (CurGear < 5) {
      for (int i = CurGear; i == 5; i++) {
        ShiftUp();
        delay(100);
      }
      CurGear = 5;
    }
  }
  //6
  if (analogRead(JoyX) == pos and analogRead(JoyY) == pos) {
    if (CurGear > 6) {
      for (int i = CurGear; i == 6; i--) {
        ShiftDown();
        delay(100);
      }
      CurGear = 6;
    }
    else if (CurGear < 6) {
      for (int i = CurGear; i == 6; i++) {
        ShiftUp();
        delay(100);
      }
      CurGear = 6;
    }
  }
}
