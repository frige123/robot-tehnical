int red= 2;
int yel= 3;
int grn= 4;
void setup()
{
pinMode(red, OUTPUT);
pinMode(yel, OUTPUT);
pinMode(grn, OUTPUT);

}

void loop() {
  digitalWrite(red, HIGH);
  digitalWrite(yel, LOW);
  digitalWrite(grn, LOW);
    delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(yel, HIGH);
  digitalWrite(grn, LOW);
    delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(yel, LOW);
  digitalWrite(yel, HIGH);
    delay(1000);
} 
