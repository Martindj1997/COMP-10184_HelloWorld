// I Martin De Jesus Gonzalez Santos, 000790179 certify that this is my original work.

#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  
  // start the USB serial monitor port
  Serial.begin(115200);

  // print some text to the USB port
  Serial.println("\n\nHello, World!");

  //Extending Hello World
  Serial.println("\n\n Martin De Jesus Gonzalez Santos");
  Serial.println("\n\n Student ID: 000790179");
  Serial.println("\n\n ***** D1 mini Details ***** ");
  Serial.println("\n\n Chip ID: " + (String)ESP.getChipId());
  Serial.println("\n\n Flash Chip ID: " + (String)ESP.getFlashChipId());
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  Serial.println("\n\n Milliseconds passed since the Arduino board began running: " + (String)millis());
}