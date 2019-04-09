int brightness = 0;
int fadeAmount = 5;

void setup()  {
  
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()  {

  analogWrite(9, brightness);
  analogWrite(10, brightness);
  analogWrite(11, brightness);
brightness = brightness + fadeAmount;

if (brightness == 0 || brightness ==255)  {
  fadeAmount = -fadeAmount ;
}
delay(30);
}
