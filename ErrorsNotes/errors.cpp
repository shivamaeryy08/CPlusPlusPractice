#include <iostream>

/*ERRORS

3 TYPES: compile time, runtime, warnings

Program gets compiled via compiler -> executable binary file

Compile time error is before run time, compilation fails and no binary executable created

Run time error means compilaiton succeeded, but when u execute the binary file, it will not do what you want to do

Usually a logical error in your program, can lead to crashes -> when program terminates unexpectedly


*/

int main () {
    // Compile time error
    // std::cout << "Hello" << std::endl
    std::cout << "Hello" << std::endl;
    // Run time error
   // Division by zero is a good example
//    int value = 7/0; program crashes when trying to print the value result
//    std::cout << value;
// Warnings aren't errors, message from compiler because it can lead to errors 
    return 0;
}