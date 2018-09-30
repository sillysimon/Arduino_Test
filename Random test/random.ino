int randval = random(0,500);
int randval2 = randval + 50;
void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);
}

void loop() {
  // put your main code here, to run repeatedly:
randval = random(0,500);
randval2 = randval + 50; 
Serial.println(randval);
Serial.println("Platzhalter");
Serial.println(randval2);
Serial.println("Platzhalter2");
delay(1000);
}