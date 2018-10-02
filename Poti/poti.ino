int sensorstate = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);

}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate = analogRead(1);
if (sensorstate < 500) {
  Serial.print("höher poti auf ");
  Serial.println(sensorstate);
}
else if (sensorstate > 550){
  Serial.print("tiefer poti auf ");
  Serial.println(sensorstate);
}
else{
  Serial.print("perfekt poti auf ");
  Serial.println(sensorstate);
}
delay(200);
}
