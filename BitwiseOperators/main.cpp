#include <iostream>
#include <bitset> // for printing ints as bits

/*
BITWISE OPERATORS

operators that let us manipulate data at bit level


*/
void printIntsAsBits (int data) {
    std::cout << std::showbase;
    std::cout << "data (dec): "  << std::dec << data << std::endl;
    std::cout << "data (hex): " << std::hex << data << std::endl;
    std::cout << "data (octal): " << std::oct << data << std::endl;
    std::cout << "data (binary): " << std::bitset<16>(data) << std::endl;
}

void shiftInt(int data, int shift) {
        std::cout << "data (binary): " << std::bitset<16>(data) << std::endl;
        // if you do bitwise operation with smt smaller than an int / 4 bytes you must static cast the result
        data = data >> shift; // shift right by shift
        std::cout << "new result in dec(right shift): " << data << std::endl;
        std::cout << "new result in binary(right shift): " << std::bitset<16>(data) << std::endl;
        data = data << shift; // shift left by shift
        std::cout << "new result in dec (left shift): " << data << std::endl;
        std::cout << "new result in binary(left shift): " << std::bitset<16>(data) << std::endl;
}

void playWithBitwiseOperators(int x, int y) {
    std::cout << "x: " << std::bitset<16>(x) << " y: " << std::bitset<16>(y) << " x & y: " << std::bitset<16>(x & y) << std::endl;
    std::cout << "x: " << std::bitset<16>(x) << " y: " << std::bitset<16>(y) << " x or y: " << std::bitset<16>(x | y) << std::endl;
    std::cout << "x: " << std::bitset<16>(x) << " y: " << std::bitset<16>(y) << " x ^ y: " << std::bitset<16>(x ^ y) << std::endl;
    std::cout << "x: " << std::bitset<16>(x) << " y: " << std::bitset<16>(y) << " ~x: " << std::bitset<16>(~x) << std::endl;
}

int main () {
    //printIntsAsBits(4);
    //shiftInt(4, 2);
    playWithBitwiseOperators(4, 8);
}

/*

When shifting if you lose data it is a permnanet loss you cant unshift so to speak
only for integral types like int char long

*/

/*
BITWISE LOGICAL OPERATORS &AND |OR ^ XOR ~NOT
*/
 