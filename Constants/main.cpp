#include <iostream>

int main () {
// const -> can intilizae but cant change after

const unsigned int earth_radius_km {6371U}; // cannot reassign earth_radius_km

const unsigned long long number_of_people_in_world {8'000'000'000ULL};

// can use const on any types

// cant change the memory location of this int via the variable name, doesnt rly refer to the 1's and 0's in memory

// Cpu doesnt have this concept of const, our compiler ios the one that understands const

// protection is not at memory level, it is at the compiler level

// IF ANOTHER VARIABLE SHARES THE SAME MEMORY LOCATION AS THE COSNT VARIABLE, it can violate the const nature of it
// or change its value

// but c++ protects you from the above issue wont assign a variable to same area as a const variable

// use const to guarantee that the variable will never change through program

// Cannot declare a const unintialized leads to compiler error

// use const as much as possible unless you need to modify a variable


// CONSTANT EXPRESSION ARE EVALUATED AT COMPILE TIME, so compuattions may be done at compile time rather than run time
// could still be evaled at run time
// use for big computations 
// so that computation can be done only once

constexpr double Pi_times3 = 3.14 * 3 * 3 * 3 * 3 * 3 * 3 * 3 * 3;


}

