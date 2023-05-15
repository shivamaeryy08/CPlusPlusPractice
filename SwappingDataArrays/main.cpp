#include <iostream>


int main () {
 int data[] {11,2,52,53,9,13,5,7,12,11,12};
  int data2[] {21,1,2,3,4,13,5,7,12,11};
 int *temp {data};
 // Changin temp data at index 0 changes data at index 0 of data array
 temp[0] = 1;
 std::cout << data[0] << std::endl;
  std::cout << temp[0] << std::endl;

// Can swap 2 arrays via loops but is inefficient

// cannot change what an array name point to smt else, meaning you cannot do data = data2
   
int *p_data{data}; // converting arrays into pointers that are modifiable via array to pointer decay
int *p_data2{data2}; // cheap in memory usage since pointeres are alwas same size dewspite array size
p_data = p_data2;
p_data2 = temp;

// Print arrays

std::cout << "Arr1 Original" << std::endl;
for (auto i: data) {
  std::cout << i << " ";
  
}
std::cout << std::endl;

std::cout << "Arr2 Original" << std::endl;
for (auto i: data2) {
  std::cout << i << " ";
  
}
std::cout << std::endl;

std::cout << "Arr1 Swapped" << std::endl;
for (int i{}; i < std::size(data2); ++i) {
  std::cout << p_data[i] << " ";
  
}
std::cout << std::endl;

std::cout << "Arr2 Swapped" << std::endl;
for (int i{}; i < std::size(data); ++i) {
  std::cout << p_data2[i] << " ";
  
}
std::cout << std::endl;
}