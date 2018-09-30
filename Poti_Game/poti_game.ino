int sensorstate = 0;
int policy = random(0,1000);
int minimum = policy;
int maximum = policy + 50;
void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);
pinMode(13, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate = analogRead(1);
if (sensorstate < minimum){
  Serial.println
}
}
