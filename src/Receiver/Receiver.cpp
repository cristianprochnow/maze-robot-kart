#include "Receiver.h"

Receiver::Receiver()
{
  Receiver::setDefault();

  this->min = Receiver::DEFAULT_MIN;
  this->max = Receiver::DEFAULT_MAX;
}

Receiver::Receiver(double min, double max)
{
  this->min = min;
  this->max = max;
}

void Receiver::setDefault()
{
  Receiver::DEFAULT_MIN = 300.0;
  Receiver::DEFAULT_MAX = 700.0;
}

void Receiver::setNewMapping(double newMin, double newMax)
{
  this->min = newMin;
  this->max = newMax;
}
