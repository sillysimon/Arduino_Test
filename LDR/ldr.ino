int sensorstate = 0
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
Serial.begin(9200);
}

void loop() {
  // put your main code here, to run repeatedly
  sensorstate = analogRead(0);
  Serial.println(sensorstate)
  delay(500);

}
