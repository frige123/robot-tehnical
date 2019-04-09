int l = 8 ;
  int i = 9;
  int o = 10; 
void setup() {
  pinMode(8, OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  digitalWrite(l, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(o, HIGH);
  delay(250);
    digitalWrite(l, LOW);
  digitalWrite(i, LOW);
  digitalWrite(o, LOW);
  delay(250); 
  digitalWrite(l, HIGH);
  digitalWrite(i, HIGH);
  digitalWrite(o,HIGH);
  delay(250);
    digitalWrite(l, LOW);
  digitalWrite(i, LOW);
  digitalWrite(o,LOW);
  delay(250); 


 




 




}
