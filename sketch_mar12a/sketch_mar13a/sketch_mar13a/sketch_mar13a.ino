int brightness = 0;
int fadeAmout = 5;
int brightness1 = 255;
int fadeAmout1 = 5;
void setup() {
pinMode (9, OUTPUT);
}
void loop() {
  analogWrite(9, brightness);
  brightness = brightness + fadeAmout;
  if (brightness == 0 || brightness == 255) {
    fadeAmout = -fadeAmout;
  analogWrite(11, brightness1);
  brightness1 = brightness1 + fadeAmout1;
  if (brightness1 == 255 || brightness1 == 0 ) {
    fadeAmout1 = -fadeAmout1;
} 
  delay (30);
  delay (20);
}
}
