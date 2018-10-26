int sensorstate = 0;
int value = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate = analogRead(0);
value = sensorstate/4;
Serial.println(sensorstate);
analogWrite(3,value);
}
