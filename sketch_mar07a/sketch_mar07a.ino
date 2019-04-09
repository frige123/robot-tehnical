void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
digitalWrite(6,HIGH);  
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
digitalWrite(7, HIGH); 
delay(150);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(7, LOW); 
digitalWrite(10, HIGH);
delay(150);
}
