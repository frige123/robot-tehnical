int r= 8;
int y= 10;
int g= 9;
int b= 7;
int g2= 11;
int b2= 6;
void setup ()
{
pinMode(r, OUTPUT);
pinMode(y, OUTPUT);
pinMode(g, OUTPUT);
pinMode(b, OUTPUT);
pinMode(g2, OUTPUT);
}
void loop()
{
digitalWrite(r, HIGH);
digitalWrite(y, LOW);
digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(g2, LOW);
digitalWrite(b2, LOW);
  delay(1000);
digitalWrite(r, LOW);
digitalWrite(y, HIGH);
digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(g2, LOW);
digitalWrite(b2, LOW);
  delay(1000);
digitalWrite(r, LOW);
digitalWrite(y, LOW);
digitalWrite(g, HIGH);
digitalWrite(b, LOW);
digitalWrite(g2, LOW);
digitalWrite(b2, LOW);
  delay(1000);
digitalWrite(r, LOW);
digitalWrite(y, LOW);
digitalWrite(g, LOW);
digitalWrite(b, HIGH);
digitalWrite(g2, LOW);
digitalWrite(b2, LOW);
  delay(1000);
digitalWrite(r, LOW);
digitalWrite(y, LOW);
digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(g2, LOW);
digitalWrite(b2, HIGH);
  delay(1000);
}
