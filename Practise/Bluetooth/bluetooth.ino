int serialbt;
int value;
void setup(){
    Serial.begin(9600);
    Serial3.begin(9600);
    pinMode(13, OUTPUT);
}
void loop(){
    serialbt=Serial3.read();
    if(serialbt == -1){
      }
      else{
    value= serialbt -49;        
    Serial.println(value);
    delay(20);
      }
}