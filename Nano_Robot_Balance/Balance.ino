void Balance() {
  CalError();
  if(FilterError >= -5){
    CalError();
    digitalWrite(STBY, HIGH); //disable standby
    digitalWrite(PWMA, HIGH);
    analogWrite(MA1, 50);
    analogWrite(MA2, 0);
    digitalWrite(PWMB, HIGH);
    analogWrite(MB1, 50);
    analogWrite(MB2, 0);
  }
  if (FilterError >= -10) {
    CalError();
    digitalWrite(STBY, HIGH); //disable standby
    digitalWrite(PWMA, HIGH);
    analogWrite(MA1, 80);
    analogWrite(MA2, 0);
    digitalWrite(PWMB, HIGH);
    analogWrite(MB1, 80);
    analogWrite(MB2, 0);
  }
  else if(FilterError >= -15){
    CalError();
    digitalWrite(STBY, HIGH); //disable standby
    digitalWrite(PWMA, HIGH);
    analogWrite(MA1, 100);
    analogWrite(MA2, 0);
    digitalWrite(PWMB, HIGH);
    analogWrite(MB1, 100);
    analogWrite(MB2, 0);
  }
  else if(FilterError >= -20){
    CalError();
    digitalWrite(STBY, HIGH); //disable standby
    digitalWrite(PWMA, HIGH);
    analogWrite(MA1, 200);
    analogWrite(MA2, 0);
    digitalWrite(PWMB, HIGH);
    analogWrite(MB1, 200);
    analogWrite(MB2, 0);
  }
  else if(FilterError <= 5){
    CalError();
    digitalWrite(STBY, HIGH); //disable standby
    digitalWrite(PWMA, HIGH);
    analogWrite(MA1, 0);
    analogWrite(MA2, 50);
    digitalWrite(PWMB, HIGH);
    analogWrite(MB1, 0);
    analogWrite(MB2, 50);
  }
  else if(FilterError <= 10){
    CalError();
    digitalWrite(STBY, HIGH); //disable standby
    digitalWrite(PWMA, HIGH);
    analogWrite(MA1, 0);
    analogWrite(MA2, 80);
    digitalWrite(PWMB, HIGH);
    analogWrite(MB1, 0);
    analogWrite(MB2, 80);
  }
  else if(FilterError <= 15){
    CalError();
    digitalWrite(STBY, HIGH); //disable standby
    digitalWrite(PWMA, HIGH);
    analogWrite(MA1, 0);
    analogWrite(MA2, 100);
    digitalWrite(PWMB, HIGH);
    analogWrite(MB1, 0);
    analogWrite(MB2, 100);
  }
  else if(FilterError <= 20){
    CalError();
    digitalWrite(STBY, HIGH); //disable standby
    digitalWrite(PWMA, HIGH);
    analogWrite(MA1, 0);
    analogWrite(MA2, 200);
    digitalWrite(PWMB, HIGH);
    analogWrite(MB1, 0);
    analogWrite(MB2, 200);
  }
} 
