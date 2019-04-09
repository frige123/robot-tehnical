#define led 9 
#define pot A0
#define led1 11
#define led2 10
void setup() {
pinMode(led , OUTPUT);
pinMode(pot, INPUT);  
}

void loop() {
 int x;
 x= analogRead(pot)/4;
 analogWrite(led, x);
 analogWrite(led1, x);
 analogWrite(led2, x); 
}
