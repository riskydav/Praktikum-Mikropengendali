// Percobaan 3: Akses Keypad Matrix dengan LCD I2C

#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
const int ROW_NUM = 4;
const byte COLUMN_NUM = 3;

char keys [ROW_NUM] [COLUMN_NUM] = 
{
  {'1', '2', '3'}
  {'4', '5', '6'}
  {'7', '8', '9'}
  {'*', '0', '#'}
};
byte pin_rows [ROW_NUM] = {7,6,5,4};
byte pin_column [COLUMN_NUM] = {3,2,1};
Keypad keypad = Keypad (makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM);

int cursorColumn = 0;

void setup(){
  lcd.init();
  lcd.backlight();
}

void loop(){
  char key = keypad.getKey();
  
  if (key){
    lcd.setCursor(cursorColumn, 0);
    lcd.print(key);

    cursorColumn++;
    if(cursorColumn == 16)
    {
      cursorColumn = 0;
    }
  }
}
