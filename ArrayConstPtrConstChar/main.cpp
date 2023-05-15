#include <iostream>

int main () {

// array of ptr to const char

const char* students[] {
    "Shivam Aery",
    "Naruto Uzumaki"
};


// print students

for (const char* student: students) std::cout << student << std::endl;
char a {'A'};
students[0] = &a; 
std::cout << *students[0] << std::endl;

// Swap one pointer for another

const char * new_student{"Bob the great"};

students[0] = new_student;

for (const char* student: students) std::cout << student << std::endl;

// array of const ptr to const char

const char* const students2[] {
       "Shivam Aery",
    "Naruto Uzumaki"
};
}