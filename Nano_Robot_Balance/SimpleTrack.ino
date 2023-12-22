void simpletrack(int MotorSpeed){
  CalError();
  if (c == 0){
    Forward(MotorSpeed - 20, 0);
  }
  else if (l == 0){
    Left(MotorSpeed - 30, 0);
  }
  else if (r == 0){
    Right(MotorSpeed - 30, 0);
  }
}

void InTrack(int MaxSpeed){
  ErrorVal();
  int Output, LeftOutput, RightOutput, KpTemp;

  //if (abs(Error) <= 2) KpTemp = 1; else KpTemp = Kp;

  Output = (Kp * Error) + (Ki * Integral) + Kd * (Error - PreError);

  LeftOutput = LeftSpeed + Output;
  RightOutput = RightSpeed - Output;

  if (LeftOutput > MaxSpeed) LeftOutput = MaxSpeed;
  if (RightOutput > MaxSpeed) RightOutput = MaxSpeed;

  digitalWrite(STBY, HIGH); //disable standby
  digitalWrite(PWMA, HIGH);
  analogWrite(MA1, LeftOutput);
  analogWrite(MA2, 0);
  digitalWrite(PWMB, HIGH);
  analogWrite(MB1, RightOutput);
  analogWrite(MB2, 0);
  
  PreError = Error;
  Integral += Error;
}
