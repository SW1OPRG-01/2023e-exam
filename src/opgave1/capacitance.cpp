#include "capacitance.h"

double capacitance(double epsilon, double area,double distance) {
  return (epsilon * area) / distance;
}