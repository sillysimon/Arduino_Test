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
void setup(){
  Serial.begin(9600);
}
void loop() {
  if(digitalRead(Dup)==1){Serial.println("Dup");}
  if(digitalRead(Ddown)==1){Serial.println("Ddown");}
  if(digitalRead(Dleft)==1){Serial.println("Dleft");}
  if(digitalRead(Dright)==1){Serial.println("Dright");}
  if(digitalRead(X)==1){Serial.println("X");}
  if(digitalRead(Y)==1){Serial.println("Y");}
  if(digitalRead(B)==1){Serial.println("B");}
  if(digitalRead(A)==1){Serial.println("A");}
}
