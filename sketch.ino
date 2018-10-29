#include <M5Stack.h>
#include <utf8rus.h>

#include "fonts/RobotoR12pt8b.h" 
#define F_RR12 &RobotoR12pt8b 

extern const unsigned char img[153600];

void setup() {
  M5.begin();
  M5.Lcd.setBrightness(100); 
  M5.Lcd.drawBitmap(0, 0, 320, 240, (uint16_t *)img);
  M5.Lcd.setTextColor(TFT_WHITE);
  M5.Lcd.setFont(F_RR12); 
  M5.Lcd.setCursor(50,215);
  M5.Lcd.print(utf8rus("Привет, русский язык!"));
}
void loop() {
  
}
