#ifndef DIBSE_H_
#define DIBSE_H_

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define RGB_LED_PIN A4

class DibsE {
public:
	DibsE();
	void setup();
	void loop();

	void simpleBlinkOn(int duration, int red, int green, int blue);
	void simpleBlinkOff();

private:
	Adafruit_NeoPixel rgbLED;
	bool blinkOn = false;
	bool rgbLedOn = false;
	int red = 0;
	int green = 0;
	int blue = 0;
	int duration = 0;
	uint32_t lastBlinkTime = 0;
};

#endif /* DIBSE_H_ */