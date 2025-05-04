#include "Led.h"

Led::Led(long id, double forwardVoltage, double current): id(id), forwardVoltage(forwardVoltage), current(current) { }

double Led::getForwardVoltage() const {
  return forwardVoltage;
}

double Led::getCurrent() const {
  return current;
}

std::string Led::toString() const {
  return std::to_string(id) + " " + std::to_string(forwardVoltage) + " " + std::to_string(current);
}

long Led::getId() const {
  return id;
}
