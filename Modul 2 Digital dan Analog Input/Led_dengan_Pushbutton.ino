// PROGRAM DIGITAL INPUT 

int masukan;
int led = 7;
int tombol = 8;


void setup() 
{
    pinMode(led, OUTPUT);
    pinMode(tombol, OUTPUT);
    
}

void loop() 
{
    masukan = digitalRead(tombol);
    if(masukan == HIGH)
    {
      digitalWrite(led, HIGH);
    }
    else 
    {
      digitalWrite(led, LOW);
    }
}
