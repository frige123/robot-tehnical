int red=3;
int yel=5;
int grn=6;
void setup()
{

pinMode(red, OUTPUT);
pinMode(yel, OUTPUT);
pinMode(grn, OUTPUT);
 }
void loop() 
 {
digitalWrite(red,HIGH);
digitalWrite(yel,LOW);
digitalWrite(grn,LOW);
delay(1000);
digitalWrite(red,LOW);
digitalWrite(yel,HIGH);
digitalWrite(grn,LOW);
delay(1000);
digitalWrite(red,LOW);
digitalWrite(yel,LOW);
digitalWrite(grn,HIGH);
delay(1000);

}
