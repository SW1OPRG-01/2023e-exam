#ifndef LED_H
#define LED_H

#include <string>

class Led {
  public:
    Led(long id, double forwardVoltage, double current);
    long getId() const;
    double getForwardVoltage() const;
    double getCurrent() const;
    std::string toString() const; 
  private:
    long id;
    double forwardVoltage;
    double current;
};

#endif