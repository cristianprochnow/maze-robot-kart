#ifndef DRIVER_H
#define DRIVER_H

class Driver
{
  public:
    bool isMoving;

    void move(int direction);
    void stop();
    void turn(int direction);
    void calibrate(int direction);
};

#endif
