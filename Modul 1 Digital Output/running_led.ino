//instalasi Pin LED
//Pin 8 untuk LED 
int LED1 = 8;
int LED2 = 7;
int LED3 = 9;
int LED4 = 10;

void setup()
{
  //LED sebagai output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  delay(1000);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  delay(1000);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED3, LOW);
  delay(1000);
  digitalWrite(LED4, HIGH);
  delay(1000);
  digitalWrite(LED4, LOW);
  delay(1000);
}
