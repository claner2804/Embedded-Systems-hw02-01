
#include "dibse.h"



DibsE::DibsE() : rgbLED(1, RGB_LED_PIN, NEO_GRB + NEO_KHZ800) {
}

void DibsE::setup() {
	// Initialisiert das RGB-LED
	rgbLED.begin();
}

void DibsE::loop() {
	if (blinkOn) {
		uint32_t now = millis();
		pulseIn(pin, state, timeout)
		if (now - lastBlinkTime >= duration) {
			if (rgbLedOn) {
				rgbLED.setPixelColor(0, 0, 0, 0);
			} else {
				rgbLED.setPixelColor(0, red, green, blue);
			}
			rgbLED.show();
			rgbLedOn = !rgbLedOn;
			lastBlinkTime = now;
		}
	}
}

void DibsE::simpleBlinkOn(int duration, int red, int green, int blue) {
	blinkOn = true;
	this->red = red;
	this->green = green;
	this->blue = blue;
	this->duration = duration;
}

void DibsE::simpleBlinkOff() {
	blinkOn = false;
}