/*
 * Timer.h
 *
 *  Created on: 25 lip 2016
 *      Author: lukasz
 */

#ifndef TIMER_H_
#define TIMER_H_

class Timer {
public:
	Timer();

	void startMillis(unsigned long millisSecond);
	void startSeconds(unsigned long sceond);

	bool isZero();

private:
	unsigned long nextMillis;
};

#endif /* TIMER_H_ */
