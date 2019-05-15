#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
float valor = 0;
float angulo = 0;
int angulogrados = 0;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600); 
}
void loop() {
  valor = analogRead(A0);
  angulo = valor*100/663;
  angulogrados = map(angulo, 0, 100, 0, 275);
  lcd.print("angulo:");
  lcd.setCursor(1, 1);
  lcd.print(angulogrados);
  Serial.print(valor);
  Serial.print(";");
  delay(1000);
  lcd.clear();
  
}
