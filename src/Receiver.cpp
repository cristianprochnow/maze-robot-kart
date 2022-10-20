class Receiver
{
  private:
    double initialValue;
    double min;
    double max;
    static double DEFAULT_MIN;
    static double DEFAULT_MAX;
    void setDefault()
    {
      Receiver::DEFAULT_MIN = 300.0;
      Receiver::DEFAULT_MAX = 700.0;
    }

  public:
    double getCurrentPositionState()
    {}
    void setNewMapping(double newMin, double newMax)
    {
      this->min = newMin;
      this->max = newMax;
    }
    Receiver(double min, double max)
    {
      this->min = min;
      this->max = max;
    }
    Receiver()
    {
      Receiver::setDefault();

      this->min = Receiver::DEFAULT_MIN;
      this->max = Receiver::DEFAULT_MAX;
    }
};
