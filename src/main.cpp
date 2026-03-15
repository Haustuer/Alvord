
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
  strip.setPixelColor(0, 255, 0, 0); // Red`
  strip.show();  
  Serial.println("Red");
  delay(1000);
  // put your main code here, to run repeatedly:
}

