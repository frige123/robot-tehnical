diigitalRead(button) == HIGH) {

digitint button = 2;

int led = 8;

void setup() {

pinMode(led, OUTPUT);

pinMode(button, INPUT);

}

void loop(){

alWrite(led, HIGH);

}

else {

digitalWrite(led, LOW);

}

}
