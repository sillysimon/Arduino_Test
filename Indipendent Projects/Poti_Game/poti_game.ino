int sensorstate = 0;
int buttonstate = 0;
int policy = random(0,1000);
int minimum = policy;
int maximum = policy + 50;
void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);
pinMode(13, INPUT);
pinMode(12, OUTPUT);
digitalWrite(12, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate = analogRead(1);
buttonstate = digitalRead(13);
if (sensorstate < minimum){
  Serial.println("höher");
  Serial.println(sensorstate);
}
else if (sensorstate > maximum){
  Serial.println("tiefer");
  Serial.println(sensorstate);
}
else {
  Serial.println("perfekt");
  Serial.println(sensorstate);
  delay(3000);
  policy = random(0,1000);
  minimum = policy;
  maximum = policy + 50;
}



}
