int a =A0;
unsigned int d = 0;
void setup() {
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  d = analogRead(a);
  if(d<500)
 digitalWrite(3, HIGH);
 else digitalWrite(3, LOW);
Serial.println(d,DEC);
 delay(500);
}
