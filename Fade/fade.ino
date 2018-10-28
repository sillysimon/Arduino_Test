void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int fadeValue= 0; fadeValue <= 255; fadeValue +=5){
    Serial.println(fadeValue);
    analogWrite(3, fadeValue);
    delay(30);
}
for(int fadeValue= 255; fadeValue >= 0; fadeValue -=5){
    Serial.println(fadeValue);
    analogWrite(3, fadeValue);
    delay(30);
}
}
