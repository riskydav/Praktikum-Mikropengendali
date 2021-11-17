//PERCOBAAN 2
int TOMBOL1 = 3;
int TOMBOL2 = 6;
int LED = 4;

void setup() 
{
  pinMode (TOMBOL1, INPUT);
  pinMode (TOMBOL2, INPUT);
  pinMode (LED, OUTPUT);
}

void loop() 
{
  if(digitalRead(TOMBOL1) == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else if(digitalRead(TOMBOL2) == HIGH)
  {
    digitalWrite(LED, LOW);
  }
  
}
