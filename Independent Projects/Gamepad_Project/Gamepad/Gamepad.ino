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
  10, 1,                  // Button Count, Hat Switch Count
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
//dpad check
//sets rotaion of HatSwitch in 45° steps
if(digitalRead(Dup)==1){
if(digitalRead(Dright)==1){Joystick.setHatSwitch(0,45);goto dpad_end;}//everytime one event is triggered it goes straight to dpad_end
if(digitalRead(Dleft)==1){Joystick.setHatSwitch(0,315);goto dpad_end;}
else{Joystick.setHatSwitch(0,1);goto dpad_end;}

}
if(digitalRead(Ddown)==1){
if(digitalRead(Dright)==1){Joystick.setHatSwitch(0,135);goto dpad_end;}
if(digitalRead(Dleft)==1){Joystick.setHatSwitch(0,225);goto dpad_end;}
if(digitalRead(Ddown)==1){Joystick.setHatSwitch(0,180);goto dpad_end;}
}
if(digitalRead(Dleft)==1){Joystick.setHatSwitch(0,270);goto dpad_end;}
if(digitalRead(Dright)==1){Joystick.setHatSwitch(0,90);goto dpad_end;}
if (digitalRead(Dup)==0) {
if(digitalRead(Ddown)==0){
  if(digitalRead(Dleft)==0){
    if(digitalRead(Dright)==0){Joystick.setHatSwitch(0,-1);goto dpad_end;}
  }
}
}
goto dpad_end;
dpad_end:
Joystick.setButton(1,digitalRead(A));//sets Joystick buttos to real button value
Joystick.setButton(3,digitalRead(X));
Joystick.setButton(4,digitalRead(Y));
Joystick.setButton(2,digitalRead(B));
Joystick.setButton(7,digitalRead(Select));
Joystick.setButton(8,digitalRead(Start));
//Joystick
Joystick.setXAxis(analogRead(U1y));//sets Analog Sticks to real Joystick value
Joystick.setYAxis(analogRead(U1x));
Joystick.setRxAxis(analogRead(U2x));
Joystick.setRyAxis(analogRead(U2y));

}
