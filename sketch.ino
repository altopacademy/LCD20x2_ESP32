#include <LiquidCrystal_I2C.h>

#define LDR_PIN 2

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  lcd.init();
  lcd.backlight();

}

void loop() {
  lcd.setCursor(2, 0);
  lcd.print("Halo Semua");
  delay(100);
}
