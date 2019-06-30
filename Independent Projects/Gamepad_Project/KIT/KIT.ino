#include <Keyboard.h>
int speed=200;
#define Dup 2
#define Ddown 5
#define Dleft 3
#define Dright 4
#define X 14
#define Y 15
#define B 16
#define A 10
#define Start 9
#define Select 8
#define RT 7
#define LT 6
#define LB 1
#define RB 0
#define U1x A0
#define U1y A1
#define U2x A3
#define U2y A2
void setup() {
  // put your setup code here, to run once:
Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(Dup)==1){
  Keyboard.press(KEY_RIGHT_GUI);
  Keyboard.releaseAll();
  delay(speed);
    Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(speed);
    Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(speed);
      Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(speed);
      Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(speed);
      Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(speed);
      Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(speed);
    Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(speed);
        Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(speed);
      Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(speed);
} 
}
