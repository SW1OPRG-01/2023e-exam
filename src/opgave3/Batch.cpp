#include "Batch.h"
#include <cmath>

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
  double average = averageForwardVoltage();
  double result = 0;
  for(Led led : leds) {
    result += pow(led.getForwardVoltage() - average, 2);
  }
  return sqrt(result/leds.size());
}