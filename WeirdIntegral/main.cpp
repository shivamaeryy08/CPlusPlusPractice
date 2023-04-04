// integral types less than 4 bytes dont support arithemetic
// compilers will auto convert from these to int if you try arithemtic with them
#include <iostream>

int main () {

    short int var1 {10}; // 2 bytes
    short int var2 {20};

    char var3 {40};
    char var4 {50};

    std::cout << "size of var1 and var2 is: " << sizeof(var1) << std::endl;

    auto result1 = var1 + var3; // will auto convert var 1 and var 3 to ints
    auto result2 = var3 + var4; // auto determines type on its own

    std::cout << "size of result1: " << sizeof(result1) << std::endl;
    std::cout << "result2: " << result2 << std::endl;

    return 0;

}