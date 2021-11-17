/ PERCOBAAN 3

int TOMBOL1 = 2;
int TOMBOL2 = 3;
int LED = 8;
int BUZZ = 9;

void setup() 
{
  pinMode (TOMBOL1, INPUT);
  pinMode (TOMBOL2, INPUT);
  pinMode (LED, OUTPUT);
  pinMode (BUZZ, OUTPUT);
  digitalWrite (LED, LOW);
}

void loop() 
{
  if(digitalRead(TOMBOL1) == HIGH)
  {
    digitalWrite(BUZZ, HIGH);
    delay(10);
    digitalWrite(BUZZ, LOW);
    digitalWrite(LED, HIGH);
  }
  else if(digitalRead(TOMBOL2) == HIGH)
  {
    digitalWrite(BUZZ, HIGH);
    delay(10);
    digitalWrite(BUZZ, LOW);
    digitalWrite(LED, LOW);
  }
}
