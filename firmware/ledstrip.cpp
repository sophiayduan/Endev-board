//made in the Arduino IDE and I know this is super basic, but I only need something basic to submit my project

#include <Adafruit_NeoPixel.h>

#define PIN 2
#define NUMPIXELS 17

#define BUTTON1_PIN 3
#define BUTTON2_PIN 4


Adafruit_NeoPixel strip(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();

  strip.setBrightness(50);
  
  pinMode(BUTTON1_PIN, INPUT_PULLUP);
  pinMode(BUTTON2_PIN, INPUT_PULLUP);

  setGreen();


}

void setGreen() {
  for (int i = 0; i < NUMPIXELS; i++) {
    strip.setPixelColor(i, 0, 255, 0);
  }
  strip.show();
}

void loop() {
  bool button1Pressed = digitalRead(BUTTON1_PIN) == LOW;
  bool button2Pressed = digitalRead(BUTTON2_PIN) == LOW;
  
  
  if (button1Pressed) {
    strip.setBrightness(min(230, strip.getBrightness() + 5)); 
  } 
    
  else if (button2Pressed) {
    strip.setBrightness(max(15, strip.getBrightness() -5)); 
  }
  delay(100);

    
}