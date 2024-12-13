#include "Batch.h"

Batch::Batch(long id): id(id) { }

void Batch::addLed(long id, double forwardVoltage, double current) {

}

double Batch::averageForwardVoltage() const {
  double average = 0;
  for(Led led : leds) {
    average += led.getForwardVoltage();
  }
  return average / leds.size();
}

double Batch::standardDeviationForwardVoltage() const {
  return 0;
}