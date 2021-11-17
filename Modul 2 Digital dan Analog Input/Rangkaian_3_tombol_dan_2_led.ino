//Rangkaian 3 tombol dan 2 led

int TOMBOL1 = 2;
int TOMBOL2 = 3;
int TOMBOL3 = 4;
int LED1 = 8;
int LED2 = 9;
int BUZZ = 11;

void setup ()
{
  pinMode (TOMBOL1, INPUT);
  pinMode (TOMBOL2, INPUT);
  pinMode (TOMBOL3, INPUT);
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (BUZZ, OUTPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}

void loop()
{
  if(digitalRead(TOMBOL1) == HIGH)
  {
   digitalWrite(BUZZ, HIGH); 
   delay(5);
   digitalWrite(BUZZ,LOW);
   digitalWrite(LED1, HIGH); 
  }
  if(digitalRead(TOMBOL2) == HIGH)
  {
   digitalWrite(BUZZ, HIGH); 
   delay(5);
   digitalWrite(BUZZ,LOW);
   digitalWrite(LED2, HIGH);
  }
  else if (digitalRead(TOMBOL3) == HIGH)
  {
    digitalWrite(BUZZ, HIGH); 
    delay(5);
    digitalWrite(BUZZ,LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }
}
