#include "Timer.h"
void setup()
{

  /* add setup code here */

    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

Timer tim1;
Timer tim2;

int delay1 = 100;
int delay2 = 250;

void loop()
{
  if (tim1.isZero())
  {
    if (digitalRead(13)) {
      digitalWrite(13, LOW);
      tim1.startMillis(delay1);
    }
    else {
      digitalWrite(13, HIGH);
      tim1.startMillis(delay1);
    }
  }


  if (tim2.isZero())
  {
    if (digitalRead(12)) {
      digitalWrite(12, LOW);
      tim2.startMillis(delay2);
    }
    else {
      digitalWrite(12, HIGH);
      tim2.startMillis(delay2);
    }
  }
}
