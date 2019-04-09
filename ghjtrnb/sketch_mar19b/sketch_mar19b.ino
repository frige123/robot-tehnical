const int PIN_BUTTON = 2;
const int PIN_LED = 13;
void setup() {
 Serial.begin(9660);
 pinMode(PIN_LED, OUTPUT);

  
}

void loop() {
int buttonState = digitalRead(PIN_BUTTON);
Serial.println(buttonState);
if (!buttonState) {
delay(50);
return;
}
digitalWrite(PIN_LED, HIGH);
delay(1000);
digitalWrite(PIN_LED, LOW);
delay(1000);
}
