int LED1 = 8;
int LED2 = 9;
int LED3 = 10;
int LED4 = 11;

void setup()
{
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3,  LOW);
  digitalWrite(LED4, LOW);
  delay(1000);
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED3, HIGH);
  delay(1000);
  digitalWrite(LED4, HIGH);
  delay(1000);
}
