// Rangkaian dengan satu potensio dan 6 LED disusun berurutan

int potensio = A0;
int LED1 = 6;
int LED2 = 7;
int LED3 = 8;
int LED4 = 9;
int LED5 = 10;
int LED6 = 11;
int bacapotensio = 0;

void setup()
{
 pinMode (potensio, INPUT);
 pinMode (LED1, OUTPUT);
 pinMode (LED2, OUTPUT);
 pinMode (LED3, OUTPUT);
 pinMode (LED4, OUTPUT);
 pinMode (LED5, OUTPUT);
 pinMode (LED6, OUTPUT);
}

void loop()
{
 bacapotensio = analogRead(potensio);
 if(bacapotensio<=100){
 digitalWrite (LED6, LOW);
 digitalWrite (LED5, LOW);
 digitalWrite (LED4, LOW);
 digitalWrite (LED3, LOW);
 digitalWrite (LED2, LOW);
 digitalWrite (LED1, LOW);
 delay (1000);
 digitalWrite (LED6, HIGH);
 delay (1000);
 digitalWrite (LED5, HIGH);
 delay (1000);
 digitalWrite (LED4, HIGH);
 delay (1000);
 digitalWrite (LED3, HIGH);
 delay (1000);
 digitalWrite (LED2, HIGH);
 delay (1000);
 digitalWrite (LED1, HIGH);
 delay (1000);
}
 
if(bacapotensio>=500)
 {
   digitalWrite(LED1, HIGH);
   digitalWrite(LED2, HIGH);
   digitalWrite(LED3, HIGH);
   digitalWrite(LED4, HIGH);
   digitalWrite(LED5, HIGH);
   digitalWrite(LED6, HIGH);
   delay(1000);
   digitalWrite (LED1, LOW);
   digitalWrite (LED2, LOW);
   digitalWrite (LED3, LOW);
   digitalWrite (LED4, LOW);
   digitalWrite (LED5, LOW);
   digitalWrite (LED6, LOW);
   delay (1000);
 }
  
if(bacapotensio>=900)
 {
   digitalWrite (LED1, LOW);
   digitalWrite (LED2, LOW);
   digitalWrite (LED3, LOW);
   digitalWrite (LED4, LOW);
   digitalWrite (LED5, LOW);
   digitalWrite (LED6, LOW);
   delay (1000);
   digitalWrite (LED1, HIGH);
   delay (1000);
   digitalWrite (LED2, HIGH);
   delay (1000);
   digitalWrite (LED3, HIGH);
   delay (1000);
   digitalWrite (LED4, HIGH);
   delay (1000);
   digitalWrite (LED5, HIGH);
   delay (1000);
   digitalWrite (LED6, HIGH);
   delay (1000);
 }
}
