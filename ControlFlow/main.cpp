#include <iostream>

// if constexpr which lets us do conditional programming at compile time
constexpr unsigned int number_of_students = 0;

int main () {
    if constexpr (number_of_students) { // check done at compile time,condition must be constexpr
        std::cout << "There are a total of: " << number_of_students << " students";
    }
    // if with initializer, canb initilaize variables to only be within if scope, can do same with switch with initializer
    if (bool tired {true};number_of_students) { // so variable tired is delcared only in if block also for else condition
        if (tired) std::cout << "I am tired";
    }

    else {
        std::cout << tired;
    }


}