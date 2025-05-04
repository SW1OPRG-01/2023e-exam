#include <iostream>
#include <string>
#include "Batch.h"

int main(int argc, char **argv) {
  Batch batch = Batch(1337);  
  
  Led led1 = Led(1, 2, 2);
  Led led2 = Led(2, 4, 4);
  Led led3 = Led(3, 2, 3);
  Led led4 = Led(4, 5, 1);

  batch.addLed(led1.getId(), led1.getForwardVoltage(), led1.getCurrent());
  batch.addLed(led2.getId(), led2.getForwardVoltage(), led2.getCurrent());
  batch.addLed(led3.getId(), led3.getForwardVoltage(), led3.getCurrent());
  batch.addLed(led4.getId(), led4.getForwardVoltage(), led4.getCurrent());

  std::cout << led4.toString() << std::endl;
  std::cout << batch.averageForwardVoltage() << " " << batch.standardDeviationForwardVoltage() << std::endl;

  return 0;
}