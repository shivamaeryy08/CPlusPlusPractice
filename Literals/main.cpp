#include <iostream>
#include <ios>

int main () {
    unsigned long number {33u};

    short short_var {2};
    signed short signed_short {3};

    signed long signed_long {4L};
    unsigned long unsigned_long_var {4ul};
    const int constant_int {4};
    short int short_int {2};
    long long value = 2147483648LL; // long int is the same size as an int
    std::cout << value << std::endl; // default for ints is signed
    //Groupuing numbers using '
    unsigned int prize {1'500'000u}; // like underscore in java and python
    std::cout << "Prize is: " << prize << std::endl;
    // narrowing erros caught by brace initialization
    // assignemtn and fucntional do not cathc that
    // unsigned char distance {256u}; // gives error due to narrowing
    unsigned int hex_number {0x22BU}; // dec 555 preifx hex with 0x
    std::cout << std::showbase;
    std::cout << std::hex << hex_number << std::endl;
    int octal_number {055}; // prefix ocal with 0
    unsigned int binary {0b1001U}; // prefix binary with 0b
    std:: cout << std::dec << binary << std::endl;
    float fraction {1.5f}; // this would be seen as a double if f is not added as suffix
    std::cout << fraction;
    std::string myName {"Shivam"}; // literals have no location in memory just burnt into binary code





}

/*
Const -> read only variable cant assign data to it
Constexpr -> constant that has the potentil to be evaluated at compile time
constinit -> variable that is initialized witih constant or literal at compile time

LITERALS
piece of data that does not live in variable
variables are basically stored in memory somewhere while literals are directly in the binary executable
put u as suffix for unsigned l as suffix for long f as suffix for float
*/