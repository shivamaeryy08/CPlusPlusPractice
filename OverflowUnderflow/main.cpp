#include <iostream>

int main () {
    int x = 2 + 3.2;
    std::cout << x << std::endl; // so here compiler implictly converted 3.2 to 2 to make an int
    // IMPLICIT CONVERSIONS ARE DONE FROM SMALLEST TO BIGGEST TPYE IF NO ASSSIGNEMNT
    double price {300.0};
    int hours {5};
    auto total_salary = price * hours;
    std::cout << "Total salary: " << total_salary << " size: " << sizeof(total_salary) << std::endl; 
    // Explicit data conversions
    // Implicit cast
    double x_ {1.0};
    double y {2.3};
    int sum = x + y; // forcing the result to be an int
    // can also use static_cast, do not use (int) like in java its old style from C not safe
    // static cast is from c++
    sum = static_cast<int> (x) + static_cast<int>(y); // explcit cast
    // Overflow happens when we put in more value then what can fit into a variable
    unsigned char char_var {250};
    unsigned char char_var2 {46};
    char at_sign {40};
    unsigned char sum2 = char_var + char_var2; // this is equal to above at sign due to overflow 
    // computations wrap around
    std::cout << sum2 << " " << at_sign << std::endl;
    // Underflow is same thing juyst opp direction

    
}