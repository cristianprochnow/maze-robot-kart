#include "Sensor.h"

double Sensor::getMin()
{
  return this->min;
}

double Sensor::getMax()
{
  return this->max;
}

Sensor::Sensor(double min, double max)
{
  this->min = min;
  this->max = max;
}
