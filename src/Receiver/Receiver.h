#ifndef RECEIVER_H
#define RECEIVER_H

class Receiver
{
  public:
    double initialValue;
    double min;
    double max;

    static double DEFAULT_MIN;
    static double DEFAULT_MAX;

    Receiver();
    Receiver(double min, double max);

    void setDefault();
    double getCurrentPositionState();
    void setNewMapping(double newMin, double newMax);
};

#endif
