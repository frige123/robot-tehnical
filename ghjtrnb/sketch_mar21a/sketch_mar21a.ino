const int PIN_BUTTON = 13;
const int
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  for(int pin=2; pin<=11; pin++){
    digitalWrite(pin, HIGH);
    delay(500);
    }
 for(int pin=11;pin>=2;pin--){           
  digitalWrite(pin, LOW);
  delay(500);
  }
  delay(1000);
digitalWrite(2, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 delay(1000); 
digitalWrite(2, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, HIGH);
 delay(1000); 
digitalWrite(2, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 delay(1000); 
digitalWrite(2, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(3,HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 delay(1000); 
digitalWrite(2, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 delay(1000); 
digitalWrite(2, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, HIGH);
 delay(1000); 
digitalWrite(2, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 delay(1000); 
digitalWrite(2, LOW);
 digitalWrite(8, LOW);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 delay(1000); 
}
