#include <iostream>
#include <bitset>
/*
MASKS are a way to highlight or shadow bits in a byte

we set up another byte to highlight a specific bit of a number

all other bits of a mask are 0

say your binary number is 1001

a mask to highlight positioon 0 would be 0001, for pos 1 0010


*/

// can use masks to reduce number of params in a funciton that takes in booleans
// here were passing 1 byte instead of multiple boolean flags which may take more than 1 byte
void useMasks(unsigned char flags) {
    const unsigned char mask_bit_0 {0b0001};
    const unsigned char mask_bit_1 {0b0010}; 
    std::cout << "bit 0 is " << ((flags & mask_bit_0) >> 0) << std::endl;
    std::cout << "bit 1 is " << ((flags & mask_bit_1) >> 1) << std::endl;


}
// info for colors can be stored in one byte since max value for a rgb is 255
void packColorInfo(unsigned int color) {
    const unsigned int red_mask {0xFF000000};
    const unsigned int green_mask {0x00FF0000};
    const unsigned int blue_mask {0x0000FF00};
    const unsigned int alpha_mask {0x000000FF};
    std::cout << std::showbase << std::hex;
    std::cout << "Red: " << ((color & red_mask) >> 24) << std::endl;
    std::cout << "Green: " << ((color & green_mask) >> 16) << std::endl;
    std::cout << "Blue: " << ((color & blue_mask) >> 8) << std::endl;
    std::cout << "Alpha: " << ((color & alpha_mask) >> 0) << std::endl;

}

int main () {
    const unsigned char mask_bit_0 {0b0001}; // mask for bit 0
    const unsigned char mask_bit_1 {0b0010}; // mask for bit 1
    /* can use masks to perform certain operations on a binary number, usually with bitwise or */
    unsigned char var {0b0000};
    var |= mask_bit_0;
    std::cout << "Changed position 0 bit : " << std::bitset<4>(var) << std::endl;
    // to reset a bit position do &=~mask, resetting meaning set to 0
    var &= ~mask_bit_0;
    std::cout << "Reset position 0 bit : " << std::bitset<4>(var) << std::endl;
    // to use multipke masks in these operations same thing just use bitwise or between masks
    var |= (mask_bit_0 | mask_bit_1);
    std::cout << "Set pos 0 and 1 to be 1: " << std::bitset<4>(var) << std::endl;
    var &= ~(mask_bit_0 | mask_bit_1); // restting 0 and 1
     std::cout << "Reset pos 0 and 1 to be 0: " << std::bitset<4>(var) << std::endl;
     // Checking bit position 5 youy shift by 5 after & with mask then calculate integer if it is 1 pos was set
     // else pos was 0
     const unsigned char mask_bit_2 {0b0100};
     var |= mask_bit_2;
     std::cout << "Bit position 0 is: " << static_cast<bool>((var & mask_bit_0) >> 0) << std::endl; 
     std::cout << "Bit position 2 is: " << static_cast<bool>((var & mask_bit_2) >> 2) << std::endl; 
     // Toggle bit position use xor with mask at bit
     var ^= mask_bit_0;
     std::cout << "Bits 0 and 2 are set: " << std::bitset<4>(var) << std::endl;
     useMasks(0b1001);
     packColorInfo(0xAABCDE00);

}

 
