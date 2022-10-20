class Sensor
{
  public:
    bool isOn;
    void read()
    {}
    double getMin()
    {
      return this->min;
    }
    double getMax()
    {
      return this->max;
    }
    Sensor(double min, double max)
    {
      this->min = min;
      this->max = max;
    }

  private:
    double readingValue;
    double min;
    double max;
};
