#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

#if !defined(CONFIG_BT_SPP_ENABLED)
#error Serial Bluetooth not available or not enabled. It is only available for the ESP32 chip.
#endif

int Red = 2;
int Green = 4;
int Blue = 5;

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("Tim"); //Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()) {
    char inChar = (char)SerialBT.read();
    if (inChar == 'r'){
      digitalWrite(Red, HIGH);
      digitalWrite(Green, LOW);
      digitalWrite(Blue, LOW);
      Serial.write(SerialBT.read());
    }
    else if(inChar == 'g'){
      digitalWrite(Red, LOW);
      digitalWrite(Green, HIGH);
      digitalWrite(Blue, LOW);
      Serial.write(SerialBT.read());
    }
    else if(inChar == 'b'){
      digitalWrite(Red, LOW);
      digitalWrite(Green, LOW);
      digitalWrite(Blue, HIGH);
      Serial.write(SerialBT.read());
    }
    else if(inChar == 'a'){
      digitalWrite(Red, HIGH);
      digitalWrite(Green, HIGH);
      digitalWrite(Blue, HIGH);
      Serial.write(SerialBT.read());
    }
    else if(inChar == 'f'){
      digitalWrite(Red, LOW);
      digitalWrite(Green, LOW);
      digitalWrite(Blue, LOW);
      Serial.write(SerialBT.read());
    }
  }
  delay(10);
}
