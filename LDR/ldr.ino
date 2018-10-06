int sensorstate = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly
  sensorstate = analogRead(0);
  Serial.println(sensorstate);
  if (sensorstate < 400){
      digitalWrite(2, HIGH);
  }
  else {
      digitalWrite(2, LOW);
  }
  delay(500);

}
