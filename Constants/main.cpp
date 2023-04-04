#include <iostream>


const int val1 {23}; // const can be eval at compile time if its value is constant
constinit int age = 88;
constexpr int val2 {val1}; // can assign const since const is actually a const expr
const constinit int age1 {val1};
constinit int age2 {age1};



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
// constexpr is also const
// cannot use run time resutls to initialize compile time things like constexpr cannot be set
// equal to a run time result such as myname

constexpr double Pi_times3 = 3.14 * 3 * 3 * 3 * 3 * 3 * 3 * 3 * 3;

// can use static_assert(smt == smt) to check a condition at compile time and give compiler error if it is untrue

// cant use non constexprs in static_assert, it is only for compile time check


/*
CONST INIT says variable should be initialize at constant time

get compiler error if you do this wiwth something that cant be evaluated at compile time

say that varaibe shoud be const intiailized

only for varaibles outside scope of main

must be initilaized wit const or literals

can combine const and constint but cant combine const and constexpr

const init != const it just means compiler intiialzied at compile time can modify it

meantfor prior to main
*/




}

