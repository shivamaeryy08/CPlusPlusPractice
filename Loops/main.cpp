#include <iostream>

int main () {
    unsigned int sum {};
    const size_t max_value = 99ULL; // size_t used for loops its just a type alias for unsigend long long it is 8 bytes 
    // used for sizes in c++ so number of students etc.
    for (size_t i =0ULL; i <= max_value; i++) sum += i;
    // can do multiple delcarations in for loop initializers
    for (int i {0}, j {1}; j < 15; ++i, ++j) { // all initialized vars must be same type

    }
    // Comma operator allows to combine two or more exprs into one expr value of operation is value of right operand
    int increment {1};
    int number {10};
    int number2 {10};
    int number3 {10};
    int result = (number *= ++increment, number2 -= (++increment), number3 += ++increment); // result gets value of last comma sepearted expr
    std::cout << "number 1 should be 20: " << number << std::endl;
    std::cout << "number 2 should be 7: " << number2 << std::endl;
    std::cout << "number 3 should be 14: " << number3 << std::endl;
    std::cout << "result should be 14: " << result << std::endl;
    // Range based for loop
    int array_values [] {1,2,3,4};
    for (auto value: array_values) { // only with collection types like array right side of : is the collection type
        std::cout << value << std::endl;
    }

}