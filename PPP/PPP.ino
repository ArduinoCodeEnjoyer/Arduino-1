#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int prev = 9;
const int ok = 8;
const int next = 7;

int Temp = 200;
int okstate, nextstate, prevstate;

float Kp = 10;
float Ki = 0;
float Kd = 0;

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.init();
  pinMode(prev, INPUT_PULLUP);
  pinMode(ok, INPUT_PULLUP);
  pinMode(next, INPUT_PULLUP);
  lcd.clear();
  lcd.backlight();
  delay(500);
  lcd.clear();
  lcd.print("       PPP");
  lcd.setCursor(5, 1);
  lcd.print("Project");
  delay(4000);
  lcd.clear();
  homescreen();
}

void loop() {
  homescreen();
  buttonstate();
}
