#include "TLE5012.h"

void setup() {
  // put your setup code here, to run once:
  delay(1000);
  Serial.begin(9600);
  tle5012.begin();
  Serial.println("init done");

}

void loop() {
  // put your main code here, to run repeatedly:
  double d = 0.0;
  tle5012.getAngleSpeed(d);
  Serial.println(d);
  delay(10);
}