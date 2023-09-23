#include "U8glib.h"

U8GLIB_SH1106_128X64 u8g(13, 11, 10, 9, 8);  // D0=13, D1=11, CS=10, DC=9, Reset=8
void setup() {
 
  u8g.firstPage();  
  do {
    u8g.setFont(u8g_font_helvB10);  
    u8g.drawStr(30, 10, "Welcome "); 
    u8g.drawStr(30, 30, "To Aimsinte");
    u8g.drawStr(10, 50, "AMIT AHKE");
   
  } while( u8g.nextPage() );
  delay(5000);  
}
void loop() {
 
}
