int menuVal = 0;
int menuPos[8][2] = { {20, 20+16},
                    {90+20, 20+16},
                    {180+20, 20+16},
                    {270+20, 20+16},
                    {20, 90+20+16},
                    {90+20, 90+20+16},
                    {180+20, 90+20+16},
                    {270+20, 90+20+16} };
String menuTitles[8] = { "Einstellungen",
                         " Bibliothek  ",
                         "Lunar Lander ",
                         " Tagesschau  ",
                         "     Uhr     ",
                         "  Kalender   ",
                         "  Hackaday   ",
                         "             "};

const unsigned char settings_bmp [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x7f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x7f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char opax_bmp [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0xff, 
  0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 
  0xf8, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0xff, 0xf8, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x00, 0xf0, 0x78, 0xff, 0xf8, 0xf0, 0x78, 0xff, 0xf8, 0x00, 0x00, 0xf0, 0x78, 0xff, 
  0xf8, 0xf0, 0x78, 0xff, 0xf8, 0x00, 0x00, 0xf0, 0x78, 0xff, 0xf8, 0xf0, 0x78, 0xff, 0xf8, 0x00, 
  0x00, 0xf0, 0x78, 0xf0, 0x78, 0xf0, 0x78, 0xff, 0xf8, 0x00, 0x00, 0xf0, 0x78, 0xf0, 0x78, 0xf0, 
  0x78, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x78, 0xf0, 0x78, 0xf0, 0x78, 0xf0, 0x00, 0x00, 0x00, 0xf0, 
  0x78, 0xf0, 0x78, 0xff, 0xf8, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x78, 0xf0, 0x78, 0xff, 0xf8, 0xf0, 
  0x00, 0x00, 0x00, 0xf0, 0x78, 0xf0, 0x78, 0xff, 0xf8, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x78, 0xff, 
  0xf8, 0xff, 0xf8, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x78, 0xff, 0xf8, 0xf0, 0x78, 0xf0, 0x00, 0x00, 
  0x00, 0xf0, 0x78, 0xff, 0xf8, 0xf0, 0x78, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xf8, 0xff, 0xf8, 0xf0, 
  0x78, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xf8, 0xf0, 0x00, 0xf0, 0x78, 0xf0, 0x00, 0x00, 0x00, 0xff, 
  0xf8, 0xf0, 0x00, 0xf0, 0x78, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xf8, 0xf0, 0x00, 0xf0, 0x78, 0xf0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x78, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xf0, 
  0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char tagesschau_bmp [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 
  0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xc0, 0x3f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x3f, 0xfc, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x7f, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 
  0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 
  0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 
  0x20, 0xff, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x01, 0xe0, 0x7f, 0x00, 0x00, 0x00, 0x1f, 
  0xc0, 0x00, 0x00, 0x0f, 0xe0, 0x3f, 0x80, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x3f, 0xe0, 0x1f, 
  0xc0, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x0f, 0xc0, 0x00, 0x00, 0x7f, 0x00, 0x00, 
  0x0f, 0xff, 0xe0, 0x0f, 0xe0, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x07, 0xe0, 0x00, 
  0x00, 0xfe, 0x00, 0x03, 0xff, 0xff, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0xfc, 0x00, 0x0f, 0xff, 0xff, 
  0xe0, 0x03, 0xf0, 0x00, 0x00, 0xfc, 0x00, 0x7f, 0xff, 0xff, 0xe0, 0x03, 0xf0, 0x00, 0x01, 0xf8, 
  0x03, 0xff, 0xff, 0xff, 0xe0, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x01, 
  0xf8, 0x00, 0x01, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x01, 0xf8, 0x00, 0x01, 0xf0, 0x1f, 0xff, 
  0xff, 0xff, 0xe0, 0x00, 0xf8, 0x00, 0x01, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xf8, 0x00, 
  0x03, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xfc, 0x00, 0x03, 0xf0, 0x1f, 0xff, 0xff, 0xff, 
  0xe0, 0x00, 0xfc, 0x00, 0x03, 0xf0, 0x1f, 0xe7, 0xff, 0xff, 0xe0, 0x00, 0xfc, 0x00, 0x03, 0xf0, 
  0x1f, 0x87, 0xff, 0xff, 0xe0, 0x00, 0xfc, 0x00, 0x03, 0xf0, 0x1c, 0x07, 0xff, 0xff, 0xe0, 0x00, 
  0xfc, 0x00, 0x03, 0xf0, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0xfc, 0x00, 0x03, 0xf0, 0x00, 0x07, 
  0xff, 0xff, 0xe0, 0x00, 0xfc, 0x00, 0x03, 0xf0, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0xfc, 0x00, 
  0x03, 0xf0, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0xfc, 0x00, 0x01, 0xf0, 0x00, 0x07, 0xff, 0xff, 
  0xe0, 0x00, 0xf8, 0x00, 0x01, 0xf0, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0xf8, 0x00, 0x01, 0xf8, 
  0x00, 0x07, 0xff, 0xff, 0xe0, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x01, 
  0xf8, 0x00, 0x01, 0xf8, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x01, 0xf8, 0x00, 0x00, 0xfc, 0x00, 0x07, 
  0xff, 0xff, 0xe0, 0x03, 0xf0, 0x00, 0x00, 0xfc, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x03, 0xf0, 0x00, 
  0x00, 0xfe, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x7e, 0x00, 0x07, 0xff, 0xff, 
  0xe0, 0x07, 0xe0, 0x00, 0x00, 0x7f, 0x00, 0x07, 0xff, 0xff, 0x80, 0x0f, 0xe0, 0x00, 0x00, 0x3f, 
  0x00, 0x07, 0xff, 0xfc, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x3f, 0x80, 0x07, 0xff, 0xe0, 0x00, 0x1f, 
  0xc0, 0x00, 0x00, 0x1f, 0xc0, 0x07, 0xff, 0x80, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x07, 
  0xfc, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x07, 0xe0, 0x00, 0x00, 0xff, 0x00, 0x00, 
  0x00, 0x07, 0xf8, 0x07, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x03, 0xfc, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0x80, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x7f, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 
  0x80, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char hackaday_bmp [] PROGMEM = {
  0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfc, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xf0, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x80, 
  0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 
  0x1f, 0x80, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x80, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xf0, 
  0x04, 0xc0, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x0c, 0xe0, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x0f, 0xfc, 0x1c, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xfe, 0x3c, 0xf9, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x1f, 0xfe, 0x7c, 0x7f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf8, 0x7f, 0xff, 
  0xf8, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xf8, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 
  0x3f, 0xff, 0xfe, 0x01, 0xfe, 0x01, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0x0f, 0xff, 0xc3, 0xff, 
  0xff, 0xe0, 0x07, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0x80, 0x01, 0xef, 0xfe, 0x3f, 0xff, 
  0xf9, 0xff, 0xde, 0x00, 0x00, 0x07, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0x80, 0x00, 0x00, 0x03, 0xf8, 
  0xff, 0xff, 0xfe, 0x7f, 0x00, 0x00, 0x00, 0x01, 0xf9, 0xff, 0xff, 0xfe, 0x7e, 0x00, 0x00, 0x00, 
  0x00, 0xf3, 0xff, 0xff, 0xff, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x77, 0xff, 0xff, 0xff, 0xb8, 0x00, 
  0x00, 0x00, 0x00, 0x27, 0xff, 0xff, 0xff, 0x90, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 
  0xc0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 
  0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xc3, 0xff, 0x0f, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0x81, 0xfe, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0xfc, 0x03, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0xfc, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0xfc, 
  0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x01, 0xfe, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1e, 
  0x03, 0xff, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x0f, 0xff, 0xc1, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x1e, 0x1f, 0xff, 0xe1, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3f, 0xff, 0xf3, 0xe0, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xbf, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xcf, 0xff, 
  0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xcf, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 
  0xc7, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x6f, 0xff, 0x87, 0xff, 0xd8, 0x00, 0x00, 0x00, 0x00, 
  0xe7, 0xff, 0xb7, 0xff, 0x9c, 0x00, 0x00, 0x00, 0x01, 0xe7, 0xff, 0xff, 0xff, 0x9e, 0x00, 0x00, 
  0x00, 0x03, 0xf3, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x07, 0xf9, 0xff, 0xff, 0xfe, 0x7f, 
  0x80, 0x00, 0x01, 0xcf, 0xf9, 0xff, 0xff, 0xfe, 0x7f, 0xde, 0x00, 0x07, 0xff, 0xfc, 0xff, 0xff, 
  0xfc, 0xff, 0xff, 0x80, 0x1f, 0xff, 0xfe, 0x7f, 0xff, 0xf9, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xfe, 
  0x7f, 0xff, 0xf9, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xfc, 0x7f, 0xff, 0xf8, 0xff, 0xff, 0xf0, 0x7f, 
  0xff, 0xf8, 0x7f, 0xfd, 0xf8, 0x7f, 0xff, 0xf8, 0x7f, 0xff, 0xf0, 0x3e, 0xfd, 0xf0, 0x3f, 0xff, 
  0xf8, 0xf9, 0xff, 0xe0, 0x3c, 0x78, 0xf0, 0x1f, 0xfe, 0x7c, 0xf0, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x0f, 0xfc, 0x3c, 0xe0, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x1c, 0xc0, 0x7f, 0xc0, 0x00, 
  0x00, 0x00, 0x0f, 0xf8, 0x0c, 0x80, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x04, 0x00, 0x1f, 
  0xc0, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 
  0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xe0, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x01, 0xf0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3e, 0x00
};

const unsigned char calendar_bmp [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 
  0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7c, 
  0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x7c, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0xf8, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x80, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0x7d, 0xff, 0xff, 0xfe, 0xfb, 0xff, 0xc0, 0x07, 0xff, 
  0x7d, 0xff, 0xff, 0xfe, 0xfb, 0xff, 0xc0, 0x07, 0xff, 0x7d, 0xff, 0xff, 0xfe, 0xfb, 0xff, 0xc0, 
  0x07, 0xff, 0x93, 0xff, 0xff, 0xff, 0x67, 0xff, 0xc0, 0x07, 0xff, 0xc7, 0xff, 0xff, 0xff, 0x8f, 
  0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x07, 0x00, 0xfc, 0x1f, 
  0x83, 0xf0, 0x7e, 0x01, 0xc0, 0x07, 0x01, 0xfe, 0x3f, 0xc7, 0xf8, 0xff, 0x01, 0xc0, 0x07, 0x01, 
  0xfe, 0x3f, 0xc7, 0xf8, 0xff, 0x01, 0xc0, 0x07, 0x01, 0xfe, 0x3f, 0xc7, 0xf8, 0xff, 0x01, 0xc0, 
  0x07, 0x01, 0xfe, 0x3f, 0xc7, 0xf8, 0xff, 0x01, 0xc0, 0x07, 0x01, 0xfe, 0x3f, 0xc7, 0xf8, 0xff, 
  0x01, 0xc0, 0x07, 0x00, 0xfc, 0x1f, 0x83, 0xf0, 0x7e, 0x01, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x07, 0x00, 0xfc, 0x1f, 0x83, 0xf0, 0x7e, 0x01, 0xc0, 0x07, 
  0x01, 0xfe, 0x3f, 0xc7, 0xf8, 0xff, 0x01, 0xc0, 0x07, 0x01, 0xfe, 0x3f, 0xc7, 0xf8, 0xff, 0x01, 
  0xc0, 0x07, 0x01, 0xfe, 0x3f, 0xc7, 0xf8, 0xff, 0x01, 0xc0, 0x07, 0x01, 0xfe, 0x3f, 0xc7, 0xf8, 
  0xff, 0x01, 0xc0, 0x07, 0x01, 0xfe, 0x3f, 0xc7, 0xf8, 0xff, 0x01, 0xc0, 0x07, 0x00, 0xfc, 0x1f, 
  0x83, 0xf0, 0x7e, 0x01, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 
  0x07, 0x00, 0xfc, 0x1f, 0x83, 0xf0, 0x00, 0x01, 0xc0, 0x07, 0x01, 0xfe, 0x3f, 0xc7, 0xf8, 0x00, 
  0x01, 0xc0, 0x07, 0x01, 0xfe, 0x3f, 0xc7, 0xf8, 0x00, 0x01, 0xc0, 0x07, 0x01, 0xfe, 0x3f, 0xc7, 
  0xf8, 0x00, 0x01, 0xc0, 0x07, 0x01, 0xfe, 0x3f, 0xc7, 0xf8, 0x00, 0x01, 0xc0, 0x07, 0x01, 0xfe, 
  0x3f, 0xc7, 0xf8, 0x00, 0x01, 0xc0, 0x07, 0x00, 0xfc, 0x1f, 0x83, 0xf0, 0x00, 0x01, 0xc0, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0xc0, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

void drawMainMenu(){

  static boolean firstRun = true;

  if(firstRun == true){
    display.fillScreen(WHITE);
  }
  
  if(buttonB.wasPressed()){
    currentPage = menuVal;
  }

  if(buttonA.wasPressed()){
    drawClock();
    delay(200); //debounce
    enterSleep();
  }

  if(buttonUp.wasPressed()) if(menuVal >= 4) menuVal-=4;
  if(buttonDown.wasPressed()) if(menuVal < 4) menuVal+=4;
  if(buttonLeft.wasPressed()) menuVal--;
  if(buttonRight.wasPressed()) menuVal++;
  if(menuVal > 7) menuVal = 7;
  if(menuVal < 0) menuVal = 0;
  
  display.fillScreen(WHITE);
  //grayRect(0, 16, display.width(), display.height()-16);
  drawTaskBar();
  drawAppSelect();
  drawIcons();
  
  display.refresh();
  buttonA.read();
  buttonB.read();
  buttonUp.read();
  buttonDown.read();
  buttonLeft.read();
  buttonRight.read();
  buttonC.read();
  firstRun = false;
}

void drawAppSelect(){
  //app highlight
  display.fillRoundRect(menuPos[menuVal][0]-6, menuPos[menuVal][1]-6, 88, 88, 20, WHITE);
  display.drawRoundRect(menuPos[menuVal][0]-6, menuPos[menuVal][1]-6, 88, 88, 20, BLACK);
  //app description
  display.fillRect(100, display.height()-24, display.width()-200, 2, BLACK);
  display.fillRect(100, display.height()-22, display.width()-200, 22, WHITE);
  display.setTextSize(2);
  display.setTextColor(BLACK);
  display.setCursor(display.width()/2-74, display.height()-18);
  display.println(menuTitles[menuVal]);
}

void drawIcons(){
  for (int i = 0; i < 8; i++) {
    display.fillRoundRect(menuPos[i][0], menuPos[i][1], 76, 76, 15, BLACK);
  }  
  display.drawBitmap(menuPos[0][0], menuPos[0][1], settings_bmp, 76, 76, WHITE);
  display.drawBitmap(menuPos[1][0], menuPos[1][1], opax_bmp, 76, 76, WHITE);
  display.fillTriangle(216, 78, 250, 56, 244, 96, WHITE);
  display.drawBitmap(menuPos[3][0], menuPos[3][1], tagesschau_bmp, 76, 76, WHITE);
  
  display.fillCircle(menuPos[4][0]+38, menuPos[4][1]+38, 3, WHITE);
  display.fillCircle(menuPos[4][0]+38, menuPos[4][1]+38-26, 3, WHITE);
  display.fillCircle(menuPos[4][0]+38+15, menuPos[4][1]+38, 3, WHITE);
  display.fillRect(menuPos[4][0]+38-3, menuPos[4][1]+38, 7, -26, WHITE);
  display.fillRect(menuPos[4][0]+38, menuPos[4][1]+38+3, 15, -6, WHITE);
  
  display.drawBitmap(menuPos[5][0]+3, menuPos[5][1]+3, calendar_bmp, 71, 70, WHITE);
  display.drawBitmap(menuPos[6][0]+3, menuPos[6][1]+3, hackaday_bmp, 70, 70, WHITE);
}
