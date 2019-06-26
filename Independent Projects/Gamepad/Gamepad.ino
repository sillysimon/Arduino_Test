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
/* Serial.begin(9600);
Serial.println("Hallo Welt");*/
Joystick.begin();
}
void loop() {
Joystick.setXAxis(AnalogRead(U1x));
Joystick.setYAxis(AnalogRead(U1y));
//dpad check
f(digitalRead(Dup)==1){
  if(digitalRead(Dright)==1){Joystick.setHatSwitch(0,45);goto dpad_end;}
  if(digitalRead(Dleft)==1){Joystick.setHatSwitch(0,315);goto dpad_end;}
  if(Dup==1){Joystick.setHatSwitch(0,0);goto dpad_end;}
  dpad_lock=true;
}
if(digitalRead(Ddown)==1){
  if(digitalRead(Dright)==1){Joystick.setHatSwitch(0,125);goto dpad_end;}
  if(digitalRead(Dleft)==1){Joystick.setHatSwitch(0,225);goto dpad_end;}
  if(digitalRead(Ddown)==1){Joystick.setHatSwitch(0,180);goto dpad_end;}
}
if(digitalRead(Dleft)==1){
  Joystick.setHatSwitch(0,270);goto dpad_end;
}
if(digitalRead(Dright)==1)
dpad_end:


}
