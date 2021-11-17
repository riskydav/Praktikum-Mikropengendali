int LED;
int waktu = 200;

void setup()
{
  for (LED = 8; LED <= 11; LED++)
  {
    pinMode(LED, OUTPUT);
    digitalWrite (LED, LOW);
  }
  
  
void loop()
{
  for (LED = 8; LED <= 11; LED++)
  {
    digitalWrite(LED, HIGH);
    delay(waktu);
    digitalWrite(LED, LOW);
    
  }
}
