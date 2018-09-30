int sensorstate = 0;
int buttonstate = 0;
int policy = random(0,1000);
int minimum = policy;
int maximum = policy + 50;
void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);
pinMode(13, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate = analogRead(1);
buttonstate = digitalRead(13)
if (sensorstate < minimum){
  Serial.println("höher");
}
else if (sensorstate > maximum){
  Serial.println("tiefer");
  Serial.println(sensorstate);
}
else (){
  Serial.println("perfekt");
}
if (buttonstate == HIGH){
  int policy = random(0,1000);
  int minimum = policy;
  int maximum = policy + 50;
  Serial.println("Neuer Wert")
}

}
