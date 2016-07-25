/*
 * Timer.cpp
 *
 *  Created on: 25 lip 2016
 *      Author: lukasz
 */

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif


#include "Timer.h"

Timer::Timer()
{
	nextMillis = 0;
}

void Timer::startMillis(unsigned long millisSecond)
{
	nextMillis = millis() + millisSecond;
}

void Timer::startSeconds(unsigned long second)
{
	nextMillis = millis() + (second * 1000);
}

bool Timer::isZero()
{
	return nextMillis < millis();
}
