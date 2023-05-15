#include <iostream>

/*
DEF Pointer Arithmetic: Operations we can do on the pointer representing the array to manipuilate the arary

*/

// Exericse to shootforward an offset from beginning of array

void shoot_forward(int data[], unsigned int offset) {
    int *ptr_data{data};
    std::cout << "The element " << offset << " slots away from the beginning is : " << *(ptr_data + offset);
}

int* minimum_address(int data[], unsigned int size) {
    int * min_address{nullptr};
    int min = *data;
    int i = 0;
    while (i < size) {
        if (*data < min) min = *data;
        data++;
        i++;
    }
    min_address = &min;
    std::cout << min << std::endl;
    return min_address;

}


int main () {

int scores[] {1,2,3,4,5,6,7,8,9,20};

// Incrementing/decrementing on a pointer will move the ptr address by the size of the type pted to by the ptr

// Example with int * : If pointer is incremented, the address is moved by 4 bytes to the next int

int *data{scores};

// moving address by incrementing by 1 and printing every element of array
std::cout << "data at scores[0]: " << *data << std::endl;
for (int i{1}; i < std::size(scores); ++i)  {
    std::cout << "data at scores" << "[" << i << "]: " << *(++data) << std::endl;

}
std::cout << "----------------------------------------------" << std::endl;

// moving ptr by 4 ints, to get 5th value of array
int *ptr_scores{scores};
ptr_scores+=4;

std::cout << "Scores[4]: " << *ptr_scores << std::endl;

// can dereference array name like decayed array to ptr since an array name is a special type of ptr

std::cout << "Scores[0]: " << *scores << std::endl;

std::cout << "----------------------------------------------" << std::endl;

// usiong array name to do ptr artiehmtic rather than decayed array to ptr
// cannot post increment or preincrement array name but can with ptrs
for (int i{0}; i < std::size(scores) ; ++i)  {
    std::cout << "data at scores" << "[" << i << "]: " << *(scores + i) << std::endl;

}

std::cout << "----------------------------------------------" << std::endl;

// Print elements in reverse order
int *new_ptr_scores{scores};
new_ptr_scores += (std::size(scores) - 1);

for (int i {std::size(scores)-1}; i >= 0; --i) {
      std::cout << "data at scores" << "[" << i << "]: " << *(new_ptr_scores--) << std::endl;
}

*(scores + 1) = 32; // changing scores[1] using ptr artiehmtic 
// can do same with decayed array to ptr

std::cout << "----------------------------------------------" << std::endl;

for (auto i : scores) std::cout << i << " ";

std::cout << "----------------------------------------------" << std::endl;
std::cout << "----------------------------------------------" << std::endl;

// DISTANCE BETWEEN ELEMENTS

// foud by subtracing ptrs for respective elements

int *ptr_first{&scores[0]}; // pointer to address of first element of array
int *ptr_sec{&scores[2]}; // pointer to address of second element of array

std::cout << "Distance between scores[0] and scores[1] : " << ptr_sec - ptr_first << std::endl;

// may use std::ptrdiff_t pos_diff = ptr2 - ptr1 or std::ptrdiff_t neg_diff = for ptr1 - ptr2

std::ptrdiff_t pos_diff = ptr_sec - ptr_first;
std::ptrdiff_t neg_diff = ptr_first - ptr_sec;
std::cout << "Sizeof(std::ptrdiff_t): " << sizeof(std::ptrdiff_t) << std::endl;

// this is a special type storing values of ptr arithemtic, made due to ptr sizes being diff on diff systems/compilers

// std::ptrdiff_t is a signed integer

std::cout << "----------------------------------------------" << std::endl;
int test_array[] {181,82,22,53,19,1,51,217,12,11};
std::cout << minimum_address(test_array, std::size(test_array));

std::cout << "Comparing pointers: " << std::boolalpha << std::endl; // for every output put true/false

std::cout << "ptr_first < ptr_sec : " << (ptr_first < ptr_sec) << std::endl; 

std::cout << "ptr_first == ptr_sec : " << (ptr_first == ptr_sec) << std::endl; 

return 0;

}

