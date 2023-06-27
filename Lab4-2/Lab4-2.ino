#include <Servo.h>
 
Servo svo;
 
int knob = 0;
int val;
 
void setup() {
  svo.attach(9);
}
 
void loop() {
  val = analogRead(knob);
  val = map(val, 0, 1023, 0, 179);
  svo.write(val);
  delay(15);
}
