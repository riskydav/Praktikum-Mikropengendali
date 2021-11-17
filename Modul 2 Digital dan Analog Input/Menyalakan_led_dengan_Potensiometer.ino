//PERCOBAAN 5
int potensio = A0;
int LED1 = 6;
int LED2 = 9;
int LED3 = 10;
int LED4 = 11;

void setup()
{
  pinMode (potensio, INPUT);
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
}
int bacapotensio = 0;

void loop()
{
  bacapotensio = analogRead(potensio);

   if (bacapotensio >=100) 
   {
    digitalWrite(LED1, HIGH);
   }
   else
   {
    digitalWrite(LED1,LOW);
    }
    if (bacapotensio >=300)
    {
      digitalWrite(LED2,HIGH);
   }
   else
   {
    digitalWrite (LED2, LOW);
   }
   if (bacapotensio >=600)
   {
    digitalWrite(LED3, HIGH);
   }
   else
   {
    digitalWrite(LED3, LOW);
   }
   if (bacapotensio >=900)
    {
      digitalWrite(LED4,HIGH);
   }
   else
   {
    digitalWrite (LED4, LOW);
   }
}
