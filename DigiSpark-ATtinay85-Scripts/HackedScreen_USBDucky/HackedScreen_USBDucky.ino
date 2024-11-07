//Viral Science https://github.com/smartgeniushacker
//ATtiny85 USB Ducky - Prank Hack your computer screen by showing webpage

#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.print("notepad");
DigiKeyboard.delay(200);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.println("Hey your is been hacked.....10%.......50%.......100%");
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.print("https://geekprank.com/matrix-code-rain/");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_F11);

 for(;;)
  {
  }
}
