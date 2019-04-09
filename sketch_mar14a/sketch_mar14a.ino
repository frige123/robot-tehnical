#define led 9 
#define pot A0
void setup() {
pinMode(led, OUTPUT); 
pinMode(pot, INPUT);
}

void loop() {
int x;
 x = analogRead(pot)/4;
analogWrite(led, x);

}
