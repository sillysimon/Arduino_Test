int sensorstate;
void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate = analogRead(1);
digitalWrite(13, HIGH);
delay(sensorstate);
digitalWrite(13, LOW);
delay(sensorstate);
Serial.println(sensorstate);
}
