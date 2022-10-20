#ifndef SENSOR_H
#define SENSOR_H

class Sensor
{
  public:
    bool isOn;
    double readingValue;
    double min;
    double max;

    void read();
    double getMin();
    double getMax();
    Sensor(double min, double max);
};

#endif
