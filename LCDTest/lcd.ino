#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
int lcdsize[] = {16, 2};
int randomize = 0;
int speed = 0;
void setup() {
  // put your setup code here, to run once:
lcd.begin(lcdsize[0], lcdsize[1]);
lcd.print("Gitarren Trainer");
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
speed = analogRead(0) + 500;
lcd.setCursor(12, 1);
lcd.print(speed);
lcd.setCursor(0, 1);
randomize = random(1 ,5);
lcd.print(randomize);
Serial.println(randomize);
Serial.print(" ");
Serial.print(speed);
delay(speed);
lcd.setCursor(2, 1);
lcd.print("/");
delay(500);
lcd.setCursor(2, 1);
lcd.print("0");
lcd.setCursor(12, 1);
lcd.print("    ");
}