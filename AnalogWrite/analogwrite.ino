int sensorstate
void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate = analogRead(0);
analogWrite(3, sensorstate);
Serial.println(sensorstate)
}
