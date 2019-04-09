#define led_pin 6 
void setup() {
 pinMode(led_pin, OUTPUT); 

}

void loop() {
for(int i=0; i<=225; i++)  
{
  analogWrite(led_pin,i);
  delay(5);
  }
for(int i=255;i>=0; i--)
{
  analogWrite(led_pin,i);
  delay(5);
  }
delay(500);
}
