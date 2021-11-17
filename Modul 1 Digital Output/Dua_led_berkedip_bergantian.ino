int LED1 = 8;
int LED2 = 9;

void setup()
{
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
}

int waktuDelay = 3000;

void loop()
{
  for (int i=1; i<=5; i++)
  {
    digitalWrite (LED1, HIGH);
    delay (500);
    digitalWrite (LED1, LOW);
    delay (500);
  }
  
  delay (waktuDelay);
  
  for (int i=1; i<=5; i++)
  {
    digitalWrite (LED2, HIGH);
    delay (500);
    digitalWrite (LED2, LOW);
    delay (500);
  }
  
  delay (waktuDelay);
}
