
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
int sensorstate = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate = analogRead(1);
Serial.println(sensorstate);
}
