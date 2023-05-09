#include <iostream>

// every var has an address value in memory

// int * means a pointer to an int whcih is the address value of a var

// can have pointers to custom types or any type 

int main () {
// declare pointer

int *random_pointer{}; // stores address of a variable type int, here pointers are initialzied to nullptr
// below is more explicit

// initialize to nullptr, means pointers are pointing to nothing
int *pointer_to_null{nullptr};

// all pointers of any type have the same size, since they all store addresses

// initializing poitners 

int int_var {43};
int *p_int_var{&int_var}; // the address of operator (&)

std::cout << "p_int (Address in memory) : " << p_int_var << std::endl;

// Derefencing a pointer : if we have the address we can read the value at the address
std::cout << "Address: " << p_int_var << " Value: " << *p_int_var << std::endl;

int_var = 400;
std::cout << "Address: " << p_int_var << " Value: " << *p_int_var << std::endl;

// pointer to char

char char_var {'A'};

char *char_ptr{&char_var};

std::cout << "Value of char_ptr is: " << *char_ptr << std::endl;

// can initilaize char pointer to a string literal c-string

// the c string will be split into a char array and the first character will be pointed to by our pointer

// must use const for this as the char array will be made to be const by compilers


const char *message {"Hello World"};

std::cout << "Message ptr value: " << *message << std::endl;


}