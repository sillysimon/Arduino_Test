int serialbt;
void setup(){
    Serial.begin(9600);
}
void loop(){
    serialbt=Serial.read();
    Serial.println();
    delay(200);
}