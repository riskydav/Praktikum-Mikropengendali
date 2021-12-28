// Percobaan 2: Membuat Sistem Login Sederhana

#include <LiquidCrystal.h>
#include <Keypad.h>

LiquidCrystal lcd(A0, A1, A2, A3, A4, A5); // (RS, E, DB4, DB5, DB6, DB7)
const byte ROWS = 4;
const byte COLS = 3;
char keys [ROWS] [COLS] = 
{
  {'1', '2', '3'}
  {'4', '5', '6'}
  {'7', '8', '9'}
  {'*', '0', '#'}
};

byte state;
byte code;
byte rowPins [ROWS] = {7,6,5,4};
byte colPins [COLS] = {3,2,1};
Keypad kpd = Keypad (makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup(){
  lcd.begin(16,2);
  reset();
}

void reset(){
  lcd.clear();
  lcd.setCursor(0, 0);
  state = 0;
  code = 0;
}

void gagal(){
  lcd.setCursor(0,0);
  lcd.print("Pin Salah!!");
  delay(1000);
  reset();
}

void sukses(){
  a:
  lcd.setCursor(0,0);
  lcd.print("Login Berhasil");
  lcd.setCursor(0,1);
  lcd.print("* : Logout");
  char key = kpd.getKey();
  if (key != '*')
  {
    goto a;
  }
  else
  {
    reset ();
  }
}

void loop(){
    lcd.setCursor(0,0);
    lcd.print("Sistem Keamanan");
    lcd.setCursor(0,1);
    lcd.print("PIN: ");

    char key = kpd.getKey();
    if (key){
      if (key != '#')
      {
        lcd.setCursor(state + 5,1);
        if (password[state] == key)
        {
          code++;
        }
        else
        {
          code--;
        }

        lcd.print("*");
        delay(50);
        state++;
      }
      else
      {
        if (code == 6)
        {
          lcd.clear();
          sukses();
        }
        else
        {
          lcd.clear();
          gagal();
        }
      }
  }
}
