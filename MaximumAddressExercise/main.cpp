#include <iostream>

int* maximum_address(int data[], unsigned int size) {
  
  int * max_address;
  
  int max = data[0];
  for (unsigned int i =0; i < size; ++i) {
      if (data[i] > max) max = data[i];
  }
  max_address = &max;
  return max_address;

}

int main () {
    int data[] {11,2,52,53,9,13,5,7,12,11};
    maximum_address(data,10);

}