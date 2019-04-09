int a = 0; 
void setup() {
Serial.begin(9600); 
pinMode(3, OUTPUT);
}

void loop() {
a = analogRead(1);
if(a<300){
a=0;
}
if(a>850){
a=1024;
}
Serial.println(a);
analogWrite(3, 300-(a/4));
delay(100);
}
