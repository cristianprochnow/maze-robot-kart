class Sensor
{
  public:
    bool isOn;
    void read();
    double getMin();
    double getMax();
    Sensor(double min, double max);

  private:
    double readingValue;
    double min;
    double max;
};

Sensor::Sensor(double min, double max)
{
  this->min = min;
  this->max = max;
}
double Sensor::getMin()
{
  return this->min;
}
double Sensor::getMax()
{
  return this->max;
}
void Sensor::read()
{}
