// Percobaan 4: Membuat Sistem Login Sederhana

#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
const byte ROW_NUM = 4;
const byte COLUMN_NUM = 3;

char keys [ROW_NUM] [COLUMN_NUM] = 
{
  {'1', '2', '3'}
  {'4', '5', '6'}
  {'7', '8', '9'}
  {'*', '0', '#'}
};

byte state;
byte code;

byte pin_rows [ROW_NUM] = {7,6,5,4};
byte pin_column [COLUMN_NUM] = {3,2,1};
char password [] = "123456";
Keypad keypad = Keypad (makeKeymap(keys),  pin_rows, pin_column, ROW_NUM, COLUMN_NUM);

int cursorColumn = 0;

void setup(){
  lcd.init();
  lcd.backlight();
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

    char key = keypad.getKey();
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
