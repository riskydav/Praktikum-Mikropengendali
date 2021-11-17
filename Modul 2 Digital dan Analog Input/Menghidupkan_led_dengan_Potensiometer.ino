// PERCOBAAN 4

int potensio = A0;
int LED = 9;

void setup() 
{
  pinMode (potensio, INPUT);
  pinMode (LED, OUTPUT);
}

int bacapotensio = 0;
int brightness = 0;

void loop() 
{
  // baca nilai kaki A0 (potensiometer/sensor
  bacapotensio = analogRead(potensio);
  // konversi nilai 0-1023 (Analog) menjadi 0-255 (PWM)
  brightness = map(bacapotensio, 0, 1023, 0, 255);
  // tentukan brightness LED dengan PWM
  analogWrite(LED, brightness);
}
