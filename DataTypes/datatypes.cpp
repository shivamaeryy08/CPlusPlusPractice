#include <iostream>
#include <string>

// auto is for deducing other types
// everything in a program, is jst a bumnc of 1's and 0's in computer's ram
// can group 1's and 0's aka bits into 8 bits = byte
// can group bytes/bits and form what we are familiar with ints, chars etc.
/*
NUMBER SYSTEMS
binary octal hexadecimal
can represent up to an integer size of 2^n - 1 given n bits

0x prefix for hexadecimal 0 prefix for octal

*/

int modifyingIntegers() {
    // can use the signed integer modifier to sayu we can positive or negative numbers
    // can use unsigned to force positive numbers only
    // range for signed numbers is -2 ^ (n-1) to 2 ^ (n-1) -1 given n bits
    // short makes the int 2 bytes instead, long is 8 bytes 
    // can only use signed unsigned long short on ints
    // long is 4 bytes if not used as modifier, short 2 bytes
    unsigned long long positive_number {4};
    std::cout << "The size of a long long in bytes is: " << sizeof(positive_number) << std::endl;
    return positive_number;
}

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
    std::cout << "The size of an int in bytes is: " << sizeof(int) << std::endl;
    modifyingIntegers();
    return 0;
}

/*
INTS = 4 BYTES
variable is a named piece of memory for data storage

int number {} // initializes to zero not garbage value like doing int number;

can do int number(5) which is functional variable initialization same as above initlization 

if you do int number {2.9} this is safer than int number (2.9) which will truncate the 9 same with assignemtn initalizers

{} will simply throw a error or warning isntead of casting to int, will stop you from doing this

THREE TYPES BRACED INITLIZATION FUNCTIONAL INITLIZATION OR ASSIGNEMNT INITLIZATION 

can use sizeof to get number of byts something occupies

*/