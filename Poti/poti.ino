int sensorstate = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);

}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate = analogRead(1);
if (sensorstate < 500) {
  Serial.println("höher");
  Serial.println(sensorstate);
}
if (sensorstate > 500){
  Serial.println("tiefer");
  Serial.println(sensorstate);
}
delay(200);
}
