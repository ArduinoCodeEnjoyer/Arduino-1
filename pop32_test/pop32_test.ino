#include <GY521.h>

#include <SparkFun_APDS9960.h>

#include <OLED_I2C_SSD1309.h>
#include <POP32.h>
#include <POP32_IO.h>

void setup() {
  oled.show();
  delay(10);
  //waitSW_OK();
  Serial.begin(9600);
}

void loop() {
  //servo(6, knob(0,180));
  //delay(1);
  servo(6, knob(0, 180));
  delay(1);
  servo(4, knob(0,180));
  oled.text(1, 0, "Servo %d", knob(0, 180));
  oled.show();
  if (SW_OK()) {
    FD(100);
    delay(1000);
    SL(100);
    delay(1000);
    SR(100);
    delay(1000);
    BK(100);
    delay(1000);
    AO();
  }
}
