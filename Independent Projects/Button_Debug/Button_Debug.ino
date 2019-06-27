void setup() {
  // put your setup code here, to run once:
//pinMode(2,INPUT);
Serial.begin(9600);
}

void loop() {

// put your main code here, to run repeatedly:
if(digitalRead(2)==1){
Serial.println("1");
}
if(digitalRead(3)==1){
Serial.println("2");
}
}
