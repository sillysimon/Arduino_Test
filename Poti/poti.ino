int sensorstate = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate = analogRead(1);
if (sensorstate < 500) {
  Serial.println("höher");
}
if (sensorstate > 500){
  Serial.println("tiefer");
}
delay(200);
}
