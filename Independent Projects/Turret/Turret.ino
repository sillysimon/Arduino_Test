#include <Servo.h>
#define laser 3
#define Servo_x 5
#define Servo_y 6
#define Joystick_x A0
#define Joystick_y A1
#define Joystick_Button 2
#define Button1 A2
#define Button2 A3
#define led 8
int servox;
int servoy;
int joy_x;
int joy_y;
int buttonstate1;
int buttonstate2;
int speed_servo;
int joy_button;
int servostate_x;
int servostate_y;
int memx;
int memy;
int memstate;

Servo servo_x;
Servo servo_y;


void setup(){
pinMode(laser, OUTPUT);
pinMode(Joystick_Button, INPUT);
pinMode(Button1, INPUT);
pinMode(Button2, INPUT);
pinMode(led, OUTPUT);
servo_x.attach(Servo_x);
servo_y.attach(Servo_y);
servostate_x=90;
servostate_y=90;
Serial.begin(9600);
Serial.println("Hallo Welt");
}

void loop(){
    joy_x = analogRead(Joystick_x);
    joy_y = analogRead(Joystick_y);
    joy_button = digitalRead(Joystick_Button);
    buttonstate1 = analogRead(Button1);
    buttonstate2 = analogRead(Button2);

//probing
    if (joy_x > 700){
       // Serial.println("rechts");
        servox = 1;
    }
    if(joy_x < 300){
       // Serial.println("links");
        servox = 2;
    }
    if(joy_y > 700){
       // Serial.println("hoch");
        servoy = 1;
    }
    if(joy_y < 300){
       // Serial.println("runter");
        servoy = 2;
    }
    
    if(buttonstate1 == 0){
      if(memstate == 1){
        memstate = 0;
        digitalWrite(led, LOW);
      }
      if(memstate == 0){
        memstate == 1;
        digitalWrite(led, HIGH);
        }
      }

//processing
    if (servox == 1){
        servostate_x = servostate_x + 1;
        servox = 0;  
        }
        
    if(servox == 2){
        servostate_x = servostate_x - 1;
        servox = 0; 
    }
    if(servoy == 1){
        servostate_y = servostate_y + 1;
        servoy = 0;
    }
    if(servoy ==2){
        servostate_y = servostate_y - 1;
        servoy = 0;
    }

       

//executing
    if (servostate_x >= 180){servostate_x = 180;}
    if (servostate_x <= 0){servostate_x = 0;}
    if (servostate_y >= 180){servostate_y = 180;}
    if (servostate_y <= 0){servostate_y = 0;}
      if(memstate == 1){
        if(buttonstate2 = 1){
         memx = servostate_x;
         memy = servostate_y;
         memstate = 0;
        }
         }
    /*Serial.print("x-Achse: ");
    Serial.println(servostate_x);
    Serial.print("y-Achse: ");
    Serial.println(servostate_y);
    Serial.print("Button: ");
    Serial.println(joy_button);*/
   // if(joy_button == 1){digitalWrite(laser, HIGH);}
   // if(joy_button == 0){digitalWrite(laser, LOW);}
    servo_x.write(servostate_x);
    servo_y.write(servostate_y);
      if(memstate == 1){
        if(buttonstate2 = 1){
         servostate_x = memx;
         servostate_y = memy;
        }
         }  
         Serial.println(memstate); 
         delay(10);
}
