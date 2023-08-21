#include <POP32.h>

int l1, l, c, r, r1;
int RefL1 = 2059;
int RefL = 1955;
int RefC = 1923;
int RefR = 1567;
int RefR1 = 2064;

int Kp, Ki, Kd, Error, PreError, Integral, MaxSpeed;

int Speed = 42;
int SlowSpeed;
int SuperSlowSpeed;
int LeftSpeed, RightSpeed;
int TurnSpeed;

void setup() {
  LeftSpeed = Speed + 10;
  RightSpeed = Speed + 10;
  TurnSpeed = Speed - 12;
  SlowSpeed = Speed - 15;
  SuperSlowSpeed = Speed - 35;
  ShowADC();
  beep();
  waitAnykey_bmp();
  beep();
}

void loop() {
  can1();
}
