#include "max.h"

void findMax(int *p_array, size_t size, int *result) {
  if( size <= 0 ) {
    *result = 0;
    return;
  }

  *result = p_array[0];
  for(int i = 1; i < size; i++) {
    if(p_array[i] > *result) {
      *result = p_array[i];
    }
  }
}