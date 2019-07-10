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
Serial.begin(9600);
}

void loop() {
  //checks for pressed buttons. If a button is triggered the assigned scipt is being executed
if(digitalRead(Dup)==1){
  for(int i=0; i>3;i++){
  Keyboard.press("W");
  delay(1);
  Keyboard.releaseAll();
  delay(1000);
  Serial.print("sent Key itteration:");
  Serial.println(i);}
  }
}
