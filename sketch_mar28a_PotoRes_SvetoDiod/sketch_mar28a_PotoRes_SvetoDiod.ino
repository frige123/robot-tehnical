int PhotoRes = 1;
int SvetoDiod = 10;
void setup()
{
  pinMode(PhotoRes, INPUT);
  pinMode(SvetoDiod, OUTPUT);
}

void loop()
{
  int x = map(analogRead(PhotoRes),100 , 800, 255, 0);
  if (x < 0)
  {
    x = 0;
  }
  if (x > 255)
  {
    x = 255;
  }
  analogWrite(SvetoDiod, x);
}
