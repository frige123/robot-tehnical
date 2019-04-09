#define trigPin 12 
#define echoPin 13 
#define led 11
#define led2 10
void setup() {
Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop() {
long duration, distance;
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 distance = (duration/58);
 if(distance <4){digitalWrite(led, HIGH);digitalWrite(led2, LOW);}
 else {digitalWrite(led, LOW);digitalWrite(led2, HIGH);}
 if (distance >=20 || distance <=0)
 {digitalWrite(led, LOW);digitalWrite(led2, LOW);
 Serial.println("Вне диапозана");
 }
 else {
  Serial.print(distance);
  Serial.println(" cm");
  }
  delay(500);
}
