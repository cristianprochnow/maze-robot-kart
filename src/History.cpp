#include<list>

class History
{
  public:
    list<int> getHistory()
    {}
    int getLastDirection()
    {}
    History()
    {
      this->directionHistory = {};
      this->lastDirection = 0;
    }

  private:
    int lastDirection;
    list<int> directionHistory;
};
