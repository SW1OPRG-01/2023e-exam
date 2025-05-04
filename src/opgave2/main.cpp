#include <iostream>
#include "max.h"

int main(int argc, char** argv) {
  int arr[10] = {-15, 7, -3, 10, -20, 5, 19, -8, 13, -2};
  int result;

  findMax(arr, sizeof(arr)/sizeof(int), &result);
  std::cout << result << std::endl;
  
  findMax(arr, 0, &result);
  std::cout << result << std::endl;
  return 0;
}