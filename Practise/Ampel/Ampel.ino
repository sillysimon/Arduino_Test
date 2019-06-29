
int red = 13;
int yellow = 12;
int green = 11;



void setup() {                
 
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
   
}


void loop() {
  digitalWrite(red, HIGH);  
  delay(10000);               
  //digitalWrite(red, LOW);    
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(10000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(yellow, LOW);  
}
