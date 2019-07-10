#include <Keyboard.h>
int speed=100;
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
Keyboard.begin();
}

void loop() {
  //checks for pressed buttons. If a button is triggered the assigned scipt is being executed
if(digitalRead(Dup)==1){
  Keyboard.press(KEY_RIGHT_GUI);//press a button in this case the windows button
  Keyboard.releaseAll();//release all pressed buttons
  delay(speed);//wait the previously set time
    Keyboard.press(KEY_TAB);//tab
  Keyboard.releaseAll();
  delay(speed);

for(int i=1;i<=5;i+=1){ //presses a button 5 times
    Keyboard.press(KEY_DOWN_ARROW);//arrow down
  Keyboard.releaseAll();
  delay(speed);
}

    Keyboard.press(KEY_RETURN);//enter
  Keyboard.releaseAll();
  delay(speed);
        Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(speed);
      Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(speed);
}
if(digitalRead(Dright)==1){
    Keyboard.press(KEY_RIGHT_GUI);
  Keyboard.releaseAll();
  delay(speed);
   Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(speed);
  for(int i=1;i<=8;i+=1){ //presses a button 8 times
      Keyboard.press(KEY_DOWN_ARROW);
      Keyboard.releaseAll();
      delay(speed); }
  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
  delay(speed);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(speed);
  }
  if(digitalRead(Ddown)==1){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press("t");
    Keyboard.releaseAll();
    delay(speed);
    Keyboard.print("shutdown now");//type in a string of text
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(speed);
  }
}
