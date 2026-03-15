
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>


// ====== CONFIG ======
#define LED_PIN     12


Adafruit_NeoPixel strip(200, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); 
  strip.begin();
  strip.show();            // Initialize all pixels to 'off'
  strip.setBrightness(80); // 0–255, adjust to taste

}

void loop() {
  for(int i=0; i<16; i++) {
    strip.setPixelColor(i, 255, 0, 0); // red
  }
  for(int i=16; i<32; i++) {
    strip.setPixelColor(i, 255,65, 0); // red
  }
  for(int i=32; i<48; i++) {
    strip.setPixelColor(i, 255,165, 0); // red
  }
    for(int i=48; i<64; i++) {
    strip.setPixelColor(i, 0,255, 0); // red
  
  }
    for(int i=64; i<80; i++) {
    strip.setPixelColor(i, 0,0, 255); // red
  }
      for(int i=80; i<96; i++) {
    strip.setPixelColor(i, 150,0, 255); // red
  }
  strip.show();  
  Serial.println("Red");
  delay(1000);
  // put your main code here, to run repeatedly:
}

