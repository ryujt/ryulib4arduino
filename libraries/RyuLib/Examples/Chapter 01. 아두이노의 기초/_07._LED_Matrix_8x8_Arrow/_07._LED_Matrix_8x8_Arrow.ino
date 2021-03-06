#include <MAX7219.h>

MAX7219 max7219(2, 3, 4);

static const unsigned char PROGMEM char_1[] = { 0x00, 0x18, 0x3C, 0x7E, 0xFF, 0x18, 0x18, 0x18 };
static const unsigned char PROGMEM char_2[] = { 0x18, 0x3C, 0x7E, 0xFF, 0x18, 0x18, 0x18, 0x00 };
static const unsigned char PROGMEM char_3[] = { 0x3C, 0x7E, 0xFF, 0x18, 0x18, 0x18, 0x00, 0x18 };
static const unsigned char PROGMEM char_4[] = { 0x7E, 0xFF, 0x18, 0x18, 0x18, 0x00, 0x18, 0x3C };
static const unsigned char PROGMEM char_5[] = { 0xFF, 0x18, 0x18, 0x18, 0x00, 0x18, 0x3C, 0x7E };
static const unsigned char PROGMEM char_6[] = { 0x18, 0x18, 0x18, 0x00, 0x18, 0x3C, 0x7E, 0xFF };
static const unsigned char PROGMEM char_7[] = { 0x18, 0x18, 0x00, 0x18, 0x3C, 0x7E, 0xFF, 0x18 };
static const unsigned char PROGMEM char_8[] = { 0x18, 0x00, 0x18, 0x3C, 0x7E, 0xFF, 0x18, 0x18 };

void setup() {
  max7219.begin();
}

void loop() {
  max7219.write(char_1);
  delay(200);

  max7219.write(char_2);
  delay(200);

  max7219.write(char_3);
  delay(200);

  max7219.write(char_4);
  delay(200);

  max7219.write(char_5);
  delay(200);

  max7219.write(char_6);
  delay(200);

  max7219.write(char_7);
  delay(200);

  max7219.write(char_8);
  delay(200);
}