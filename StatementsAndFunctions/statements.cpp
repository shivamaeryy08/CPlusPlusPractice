#include <iostream>
#include <string>
/*
STATEMENTS


same as java, end with ;

do not need to convert int to string in print stateemtns similar to java

statements executed in order from top to bottom, executioon goes until statement

causes termination or something causes sequenece of another statemenrts to run such as funcnton call

funciton must bedefined before use in main MEANING THEY ARTE ABOVE MAIN

*/

int addNumbers(int first_number, int second_number) {
    int sum = first_number + second_number;
    return sum;
}

std::string getUserInfo() {
    std::string firstName; // declare variabnle first before input
    std::string lastName;
    std::string favorite_game;
    std::cout << "Enter the name of your favourite game: ";
    std::getline(std::cin, favorite_game); // alwasy put get line before std cin
    std::cout << "Please type in your name : ";
    std::cin >> firstName >> lastName; // data going from terminal/console to program, chaining to handle two inputs with spaces   
    return "My name is " + firstName + " " + lastName + " and my favourite game is " + favorite_game;
}

int main () {
    int random_number {3}; // can use this notation to assign instead of equal
    std::cout << "Sum of 7 and 8 is: " << addNumbers(7, 8) << std::endl;
    // data goes from program TO std::cout then to terminal
    std::string user_info = getUserInfo();
    std::cout <<  user_info << std::endl;
    return 0;
}

// Std::cout is printing data to terminal, std::cin reading data from terminal
// std::cerr priniting erros to termianl
//std::clog printing log messages to console
 