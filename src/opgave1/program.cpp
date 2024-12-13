#include <iostream>
#include <string>
#include "capacitance.h"

int main(int argc, char** argv) {
  
  std::cout << "Dette program beregner kapacitans mellem to parallelle plader med et givet materiale" << std::endl;
  std::cout << "Indtast materiale, areal (i enheden kvadratmeter) og afstand (i enheden meter). Materialet kan være: vakuum, polyethelene, mica eller keramik:" << std::endl;

  std::string materiale;   
  double afstand;
  double areal;

  std::cin >> materiale >> areal >> afstand;

  double epsilon = 0;
  if(materiale == "vakuum") {
    epsilon = 8.85e-12;
  } else if(materiale == "polyethelene") {
    epsilon = 2.25;
  } else if(materiale == "mica") {
    epsilon = 7.00;
  } else if(materiale == "keramik") {
    epsilon = 9.00;
  } else {
    std::cout << "Ukendt materiale" << std::endl;
    return -1;
  }

  if(areal <= 0) {
    std::cout << "areal <= 0" << std::endl;
    return -2;

  } 
  
  if(afstand <= 0) {
    std::cout << "afstand <= 0" << std::endl;
    return -3;
  }

  std::cout << capacitance(epsilon, areal, afstand) << std::endl;

  return 0;
}