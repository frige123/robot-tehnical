byte i;
byte LedMax = 13;
void setup() {
 for(i=2;i<=LedMax;i++){pinMode(i, OUTPUT);}
}

void loop() {
for(i=2;i<=LedMax;i++)
{
  digitalWrite(i, HIGH);
  delay(100);
  }
 delay(1000);
 for(i=LedMax;i>=2;i--)
 {
  digitalWrite(i, LOW);
  delay(100);
  }
delay(100);
}
