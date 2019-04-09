int blue = 6;
int yel = 10;
int pot = 0;
int x;
void setup() { 
Serial.begin(9600);
pinMode(blue, OUTPUT);
pinMode(yel, OUTPUT);
pinMode(pot, INPUT);
}

void loop() {
x = analogRead(pot)/4;  
Serial.print(x);
analogWrite(blue, x);
analogWrite(yel, x);
}
