// Percobaan 1: Program Dasar Akses Keypad Matrix 4x4

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
byte rowPins [ROWS] = {7,6,5,4};
byte colPins [COLS] = {3,2,1};
Keypad kpd = Keypad (makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup(){
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Key is: ");
}

void loop(){
  char key = kpd.getKey();
  if (key){
    lcd.setCursor(9,0);
    lcd.print(key);
  }
}
