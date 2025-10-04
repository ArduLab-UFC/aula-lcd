#include <LiquidCrystal.h>

#define rs 2
#define e 3
#define d4 4
#define d5 5
#define d6 6
#define d7 7

LiquidCrystal lcd(rs, e, d4, d5,d6, d7);

char *frase = {"Aula de Arduino"};

//Introdução ao LCD, testando montagem

void setup() {
  lcd.begin(16,2);
  lcd.clear();
  Serial.begin(9600);
}

void loop() {
  lcd.setCursor(1,0);
  lcd.print("Preparando");
  delay(1000);
  lcd.clear();
  lcd.print(frase);
  delay(1000);
  lcd.clear();

}
