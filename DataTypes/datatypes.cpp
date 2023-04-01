#include <iostream>
#include <string>

// auto is for deducing other types
// everything in a program, is jst a bumnc of 1's and 0's in computer's ram
// can group 1's and 0's aka bits into 8 bits = byte
// can group bytes/bits and form what we are familiar with ints, chars etc.
/*
NUMBER SYSTEMS
binary octal hexadecimal
can represent up to an integer size of 2 ^ n - 1 given n bits

0x prefix for hexadecimal 0 prefix for octal

*/
int main () {
    int decimalNumber = 15;
    int octalNumber = 017;
    int hexaNumber = 0x0f;
    int binaryNumber = 0b00001111; // Since C++14
    std::cout << "Decimal number: " << decimalNumber << std::endl;
    std::cout << "Octal number: " << octalNumber << std::endl;
    std::cout << "Hexadecimal number: " << hexaNumber << std::endl;
    std::cout << "Binary number: " << binaryNumber << std::endl;
    // when printing, C++ auto converts these non decimal numbers to decimal values
    return 0;
}