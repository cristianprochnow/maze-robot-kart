#include <list>

#ifndef HISTORY_H
#define HISTORY_H

class History
{
  public:
    int lastDirection;
    list<int> directionHistory;

    History();

    list<int> getHistory();
    int getLastDirection();
};

#endif
