#include "Mouse.h"

const int xAxis = A0;
const int yAxis = A1;

void setup() {
  Mouse.begin();
}

void loop() {
  int xReading = readAxis(A0);
  int yReading = readAxis(A1);
  
  Mouse.move(xReading, yReading, 0);

  delay(10);
}

int readAxis(int thisAxis) {
  int reading = analogRead(thisAxis);

  distance = Math.round(reading / 1023);

  return distance;
}
