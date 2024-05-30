
#include <Arduino.h>
#include "dibse.h"

DibsE dibse;

void setup() {
	dibse.setup();
	dibse.simpleBlinkOn(300, 0, 255, 0);
}


void loop() {
	dibse.loop();
}


