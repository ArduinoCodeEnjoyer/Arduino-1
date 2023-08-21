void InitialSpeed(int MotorSpeed){
  Error = 0 ;
  PreError = 0;
  Integral = 0;
  Ki = 0;
  MaxSpeed = MotorSpeed;
  
  if(MotorSpeed < 50){
    Kp = 150;
    Kd = 200;
    LeftSpeed = MotorSpeed - 0;  
    RightSpeed = MotorSpeed - 1;
  }
  else if(MotorSpeed <= 70){
    Kp = 200;
    Kd = 300;
    LeftSpeed = MotorSpeed - 0;
    RightSpeed = MotorSpeed - 1;
  }
  else if(MotorSpeed <= 100){
    Kp = 300;
    Kd = 400;
    LeftSpeed = MotorSpeed - 0;
    RightSpeed = MotorSpeed - 2;
  }
}
