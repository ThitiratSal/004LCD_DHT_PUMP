#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
int pinRelay = 15;
int humidity = 0;
LiquidCrystal_I2C lcd(0x27,20,4); 
 
void setup (){
  Serial.begin(9600);
Serial.println("Micro Projects TH");

}
void loop(){
  humidity = analogRead(0);
  Serial.begin(9600);
  Serial.print("humidity : ");
   Serial.println(humidity);
   lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("humidity : ");
  lcd.println(humidity);
  if (humidity > 700) {
    digitalWrite(pinRelay, LOW);
  }
else if (humidity <= 700) {
  digitalWrite(pinRelay, HIGH);
  delay(100);
} }