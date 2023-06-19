#include <POP32.h>
int count = 100;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  oled.text(0,0,"count:%d  ", count);
  oled.show();
  if(in(3)==0){
    count++;
    beep();
    delay(10);
  }
  if(in(4)==0){
    count++;
    beep();
    delay(10);
  }
}
