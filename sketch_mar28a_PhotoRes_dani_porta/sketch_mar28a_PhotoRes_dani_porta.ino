int PhotoRes = 1;

void setup()
{
  pinMode(PhotoRes, INPUT);
  Serial.begin(9600);
  //pinMode(buttonPin, INPUT);
}


void loop()
{
 Serial.println(analogRead(PhotoRes));
}
