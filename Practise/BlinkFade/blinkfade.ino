void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int blinkValue = 255; blinkValue >= 0; blinkValue -=5){
    Serial.println(blinkValue);
    digitalWrite(3, HIGH);
    delay(blinkValue);
    digitalWrite(3, LOW);
    delay(blinkValue);
}  
for(int blinkValue = 0; blinkValue <= 255; blinkValue +=5){
    Serial.println(blinkValue);
    digitalWrite(3, HIGH);
    delay(blinkValue);
    digitalWrite(3, LOW);
    delay(blinkValue);
}

}
