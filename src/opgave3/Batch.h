#ifndef BATCH_H
#define BATCH_H

#include "Led.h"
#include <vector>

class Batch {
  public:
    Batch(long id);
    void addLed(long id, double forwardVoltage, double current);
    double averageForwardVoltage() const;
    double standardDeviationForwardVoltage() const;
  private:
    long id;
    std::vector<Led> leds;
};

#endif
