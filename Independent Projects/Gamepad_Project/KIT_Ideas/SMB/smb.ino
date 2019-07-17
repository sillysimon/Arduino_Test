#include <Joystick.h>
//uses Joystick Library from MHeironimus
//can be found under https://github.com/MHeironimus/ArduinoJoystickLibrary
//name ports
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
//constructor Codebase from MHeironimus' Code Examples for the ArduinoJoystickLibrary under GNU Lesser General Public License v3.0
//can be found under https://github.com/MHeironimus/ArduinoJoystickLibrary/blob/master/Joystick/examples/GamepadExample/GamepadExample.ino
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD, //Joystick constructor
  4, 1,                  // Button Count, Hat Switch Count
  true, true, false,     // X and Y, but no Z Axis
  true, true, false,   // Rx, Ry but no Rz
  false, false,          // No rudder or throttle
  false, false, false);  // No accelerator, brake, or steering);

void setup()
{
for(int pin=0; pin >= 10; pin+=1){
  pinMode(pin, INPUT);
} //set all Pins to INPUT
Joystick.begin();
}
void loop() {
if(digitalRead(Dup)==1){
  /*Joystick.setButton(4,1);
  delay(150);
  Joystick.setButton(4,0);
  delay(3310);*/
  Joystick.setButton(3,1);
  delay(1010);

  Joystick.setHatSwitch(0,90);
  delay(1210);

  Joystick.setButton(1,1);
  delay(240);
  Joystick.setButton(1,0);
  delay(320);

  Joystick.setButton(1,1);
  delay(310);
  Joystick.setButton(1,0);
  delay(120);

  Joystick.setButton(1,1);
  delay(180);
  Joystick.setButton(1,0);
  delay(1200);

  Joystick.setButton(1,1);
  delay(150);
  Joystick.setButton(1,0);
  delay(780);

  Joystick.setButton(1,1);
  delay(290);
  Joystick.setButton(1,0);
  delay(330);

  Joystick.setButton(1,1);
  delay(380);
  Joystick.setButton(1,0);
  delay(180);

  Joystick.setButton(1,1);
  delay(370);
  Joystick.setButton(1,0);
  delay(340);

  Joystick.setButton(1,1);
  delay(1110);
  Joystick.setButton(1,0);
  delay(1010);

  Joystick.setButton(1,1);
  delay(180);
  Joystick.setButton(1,0);
  delay(890);

  Joystick.setButton(1,1);
  delay(140);
  Joystick.setButton(1,0);
  delay(640);

  Joystick.setButton(1,1);
  delay(220);
  Joystick.setButton(1,0);
  delay(820);

  Joystick.setButton(1,1);
  delay(190);
  Joystick.setButton(1,0);
  delay(720);

  Joystick.setButton(1,1);
  delay(140);
  Joystick.setButton(1,0);
  delay(1160);

  Joystick.setButton(1,1);
  delay(160);
  Joystick.setButton(1,0);
  delay(830);

  Joystick.setButton(1,1);
  delay(570);
  Joystick.setButton(1,0);
  delay(730);

  Joystick.setButton(1,1);
  delay(480);
  Joystick.setButton(1,0);
  delay(370);

  Joystick.setButton(1,1);
  delay(180);
  Joystick.setButton(1,0);
  delay(300);

  Joystick.setButton(1,1);
  delay(440);
  Joystick.setButton(1,0);
  delay(980);

  Joystick.setButton(1,1);
  delay(280);
  Joystick.setButton(1,0);
  delay(380);

  Joystick.setButton(1,1);
  delay(310);
  Joystick.setButton(1,0);
  delay(730);

  Joystick.setButton(1,1);
  delay(310);
  Joystick.setButton(1,0);
  delay(1130);

  Joystick.setButton(1,1);
  delay(150);
  Joystick.setButton(1,0);
  delay(420);

  Joystick.setButton(1,1);
  delay(240);
  Joystick.setButton(1,0);
  delay(340);

  Joystick.setButton(1,1);
  delay(610);
  Joystick.setButton(1,0);
  delay(230);

  Joystick.setButton(1,1);
  delay(690);
  Joystick.setButton(1,0);
  delay(250);

  Joystick.setButton(1,1);
  delay(2480);
  Joystick.setButton(1,0);
  delay(170);

  Joystick.setButton(3,0);
  Joystick.setHatSwitch(0,-1);  



}



}
