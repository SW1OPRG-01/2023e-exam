#include <iostream>
#include <cstdlib>


void findMax(int *p_array, size_t size, int *result) {
  if( size <= 0 ) {
    *result = 0;
  }

  *result = p_array[0];
  for(int i = 1; i < size; i++) {
    if(p_array[i] > *result) {
      *result = p_array[i];
    }
  }
}

int main(int argc, char** argv) {
  int arr[10] = {-15, 7, -3, 10, -20, 5, 19, -8, 13, -2};
  int result;
  findMax(arr, sizeof(arr)/sizeof(int), &result);
  std::cout << result << std::endl;
  return 0;
}