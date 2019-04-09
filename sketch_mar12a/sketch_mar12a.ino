int g = 8;
int j = 9;
int l = 10;
void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
digitalWrite(g, HIGH);
digitalWrite(j, LOW); 
digitalWrite(l, LOW);
delay(2000);
digitalWrite(g, LOW);
digitalWrite(j, HIGH); 
digitalWrite(l, LOW);
delay(2000);
digitalWrite(g, LOW);
digitalWrite(j, LOW); 
digitalWrite(l, HIGH);
delay(2000);
}
