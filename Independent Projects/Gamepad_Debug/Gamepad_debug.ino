#include <Joystick.h>

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
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  10, 1,                  // Button Count, Hat Switch Count
  true, true, true,     // X and Y, but no Z Axis
  true, true, true,   // No Rx, Ry, or Rz
  false, false,          // No rudder or throttle
  false, false, false);  // No accelerator, brake, or steering);
void setup()
{
for(int pin=0; pin >= 10; pin+=1){
  pinMode(pin, INPUT);
} //set all Pins to INPUT
Serial.begin(9600);
Serial.println("Hallo Welt");
Joystick.begin();
Serial.println("Hallo Welt");
}
void loop() {
//Joystick.setXAxis(AnalogRead(U1x));
//Joystick.setYAxis(AnalogRead(U1y));
//dpad check
  if(digitalRead(Dup)==1){
  if(digitalRead(Dright)==1){Joystick.setHatSwitch(0,45);Serial.println("Dpad:45°");goto dpad_end;}
  if(digitalRead(Dleft)==1){Joystick.setHatSwitch(0,315);Serial.println("Dpad:315°");goto dpad_end;}
  else{Joystick.setHatSwitch(0,1);Serial.println("Dpad:0°");goto dpad_end;}

}
if(digitalRead(Ddown)==1){
  if(digitalRead(Dright)==1){Joystick.setHatSwitch(0,135);Serial.println("Dpad:135°");goto dpad_end;}
  if(digitalRead(Dleft)==1){Joystick.setHatSwitch(0,225);Serial.println("Dpad:255°");goto dpad_end;}
  if(digitalRead(Ddown)==1){Joystick.setHatSwitch(0,180);Serial.println("Dpad:180°");goto dpad_end;}
}
if(digitalRead(Dleft)==1){Joystick.setHatSwitch(0,270);Serial.println("Dpad:270°");goto dpad_end;}
if(digitalRead(Dright)==1){Joystick.setHatSwitch(0,90);Serial.println("Dpad:90°");goto dpad_end;}
if (digitalRead(Dup)==0) {
  if(digitalRead(Ddown)==0){
    if(digitalRead(Dleft)==0){
      if(digitalRead(Dright)==0){Joystick.setHatSwitch(0,-1);goto dpad_end;}
    }
  }
}
goto dpad_end;
dpad_end:
Joystick.setButton(1,digitalRead(A));
Joystick.setButton(3,digitalRead(X));
Joystick.setButton(4,digitalRead(Y));
Joystick.setButton(2,digitalRead(B));

}
=======
#include <Joystick.h>

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
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  10, 1,                  // Button Count, Hat Switch Count
  true, true, true,     // X and Y, but no Z Axis
  true, true, true,   // No Rx, Ry, or Rz
  false, false,          // No rudder or throttle
  false, false, false);  // No accelerator, brake, or steering);
void setup()
{
for(int pin=0; pin >= 10; pin+=1){
  pinMode(pin, INPUT);
} //set all Pins to INPUT
Serial.begin(9600);
Serial.println("Hallo Welt");
Joystick.begin();
Serial.println("Hallo Welt");
}
void loop() {
//Joystick.setXAxis(AnalogRead(U1x));
//Joystick.setYAxis(AnalogRead(U1y));
//dpad check
  if(digitalRead(Dup)==1){
  if(digitalRead(Dright)==1){Joystick.setHatSwitch(0,45);Serial.println("Dpad:45°");goto dpad_end;}
  if(digitalRead(Dleft)==1){Joystick.setHatSwitch(0,315);Serial.println("Dpad:315°");goto dpad_end;}
  else{Joystick.setHatSwitch(0,1);Serial.println("Dpad:0°");goto dpad_end;}

}
if(digitalRead(Ddown)==1){
  if(digitalRead(Dright)==1){Joystick.setHatSwitch(0,135);Serial.println("Dpad:135°");goto dpad_end;}
  if(digitalRead(Dleft)==1){Joystick.setHatSwitch(0,225);Serial.println("Dpad:255°");goto dpad_end;}
  if(digitalRead(Ddown)==1){Joystick.setHatSwitch(0,180);Serial.println("Dpad:180°");goto dpad_end;}
}
if(digitalRead(Dleft)==1){Joystick.setHatSwitch(0,270);Serial.println("Dpad:270°");goto dpad_end;}
if(digitalRead(Dright)==1){Joystick.setHatSwitch(0,90);Serial.println("Dpad:90°");goto dpad_end;}
if (digitalRead(Dup)==0) {
  if(digitalRead(Ddown)==0){
    if(digitalRead(Dleft)==0){
      if(digitalRead(Dright)==0){Joystick.setHatSwitch(0,-1);goto dpad_end;}
    }
  }
}
goto dpad_end;
dpad_end:
Joystick.setButton(1,digitalRead(A));
Joystick.setButton(3,digitalRead(X));
Joystick.setButton(4,digitalRead(Y));
Joystick.setButton(2,digitalRead(B));

}
>>>>>>> Stashed changes
