//Program Blink
// Inisialisasi pin led
int led = 8; // Pin 8 untuk led

void setup()
{
  pinMode (led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
