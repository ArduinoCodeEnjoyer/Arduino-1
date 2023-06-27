#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Hello!");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Welcome!");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("My name is");
  delay(2000);
  lcd.setCursor(0, 1);
  lcd.print("Andaman");*
  delay(2000);
}
