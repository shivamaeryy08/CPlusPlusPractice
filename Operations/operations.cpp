#include <iostream>

// std:flush immeditaely sends data to device connected to stream
/*
std::cout prints from program -> terminal
THINGS ARE NOT DIRECTLY SENT TO TERMAINL

so its more so things go from std::cout -> buffer -> terminal, when buffer is full thend data is sent to terminal
if you want it to immediately go to terminal use std::flush
std:setw() sets width of text to print by putting it bet std::cout and the thing to print and after thing to print
can use std::cout << std::noboolalpha to force 1's and 0's to be printed
can use std::showpos or std::noshowpos written same way as above to show or not show + sign for pos numbers
can use std::dec std::hex std::oct to change how numbers in diff bases printed put before thing to output
can use std::showbase and std::noshowbase to see base of the number output
can use std::uppercase and std::nouppercase for data to be shown in uppercase
can use std::fixed to set a certain preicison std::scienfitic for scientific 
*/
void createFormattedTable() {
    std::cout

}
int main () {
    int numberToPrefixIncrement {4};
    int numberToPostfixIncrement {4};
    // if you use value++ = postfix, ++value is prefix, post fix means increment after use, pre fix means increment before use
    std::cout << "Post fix number: " << numberToPostfixIncrement++ << std::endl;
    std::cout << "Pre fix number: " << ++numberToPrefixIncrement << std::endl;
    createFormattedTable();
    return 0;
}

// integer divison truncates like java, unlike python

/*
#include ios and iomanip for output formatting

*/