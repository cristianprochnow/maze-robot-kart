#ifndef VALIDATOR_H
#define VALIDATOR_H

class Validator
{
  public:
    bool isInValidPosition;
    double limit;

    Validator(double limit);

    bool canMove();
    bool getSituation();
};

#endif
