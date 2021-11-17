//Program Flip-Flop
int LED = 8;

void setup()
{
  pinMode (led, OUTPUT);
}

// awal waktu delay 5000 | 5 detik
int waktuDelay = 500;

void loop()
{
  //perulangan sebanyak 5 kali dari 1 hingga 5 
  for (int i=1; i<=5; i++)
  {
    //LED hidup mati dengan durasi 500 milisekon
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  }
  
  //diam selama 5 detik
  delay (waktuDelay);
}
