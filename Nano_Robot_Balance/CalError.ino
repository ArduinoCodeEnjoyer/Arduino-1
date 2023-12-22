void CalError(){
  A[0] = analogRead(0);
  A[1] = analogRead(1);
  A[2] = analogRead(2);
  if (A[0] > refl) l = 0; else l = 1;
  if (A[1] > refc) c = 0; else c = 1;
  if (A[2] > refr) r = 0; else r = 1;
}

void ErrorVal(){
  CalError();
  if((l == 1) && (c == 1) && (r == 0)) Error = 2;
  else if((l == 1) && (c == 0) && (r == 1)) Error = 0;
  else if((l == 0) && (c == 1) && (r == 1)) Error = -2;
}
