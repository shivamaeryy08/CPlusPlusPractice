#include <iostream>
#include <string> 
// arrays are a way to set up a collection, so its a collection of items under one var name

// in memory its all 0's and 1's each row so to speak would be one item of the array

void unique_numbers(int numbers[], unsigned int collection_size) {
    int unique_numbers[collection_size];
    int unique_numbers_index = 0;
    int cur_number = numbers[0];
    unique_numbers[unique_numbers_index++] = cur_number;
    bool duplicate_found = false;
    for (int i{1}; i < collection_size; ++i) {
        duplicate_found = false;
        for (int number : unique_numbers) {
            if (numbers[i] == number) {
                duplicate_found = true;
                break;
            }
        }
        if (duplicate_found) continue;
        cur_number = numbers[i];
        unique_numbers[unique_numbers_index++] = cur_number;
 
    }
    int unique_numbers_count = unique_numbers_index;
    std::cout << "The collection contains " << unique_numbers_count << " unique numbers, they are : " << std::endl;
    for (int i{}; i < unique_numbers_count; ++i) std::cout << unique_numbers[i] << " ";
         

}

void size_of_array_random_array() {
    int random_array[] {1,2,3,4}; // std::size was introduced in c++ 17
    std::cout << "Size of provided array: " << std::size(random_array) << std::endl; // use std:size to get size of array

}

bool is_sorted(int numbers[], unsigned int collection_size) {
   bool is_sorted = true;
   int i = 0;
   while (i < collection_size - 1) {
    if (numbers[i] > numbers[i+1]) is_sorted = false;
    i++;
   }
   return is_sorted;
}

void common_elements(int array_1[], int array_2[], int array1size, int array2size) {
    std::string list_common_numbers{""};
    int count{};
    for (int i {}; i < array1size; ++i) {
        for (int j{}; j < array2size; ++j) {
            if (array_1[i] == array_2[j]) {
                list_common_numbers += (std::to_string(array_1[i]) + " "); 
                count++;
                }
        }
    }
    if (list_common_numbers == "") std::cout << "There are 0 common elements";
    else std::cout << "There are " << count << " common elements they are : " << list_common_numbers;
}


int main () {
    // use square brackets to access items starting from 0
    int scores[10]; // declare an array, says scores is an array storing 10 integers

    std::cout << scores[0] << std::endl; // all the values are garbage values since you didnt define any of them
    // array has boundaries HOWEVER C++ lets you read outside boundaries but youi will run into errors
    scores[0] = 1;
    //std::cout << "Score index 0: " << scores[0] << std::endl;
    //std::string names[2] {"Shivam", "Xyla"}; // delcare and initialize
    //for (std::string name : names) std::cout << "Name: " << name << std::endl;
    // if you leave out some elemnts in initialzie theyre = 0
    // can omit size of array compiler finds size based on # of elements
    // can delcare array const cant modify array values via index
    // ARRAYS STORE ELEMENTS OF THE SAME TYPE NEVER DIFFERENT TYPE
    int numbers[9] {7,5,21,3,8,2,21,4,3};
    unique_numbers(numbers, 9);
    size_of_array_random_array();
    //Arrays of charadcters
    char name[] {'X','Y','L','A', '\0'};
    // Can directly print out a character array, make sure to make it a c string
    // '\0' is the null termination string, necessary to clarify to std::cout where to stop printing
    std::cout << "Name: " << name << std::endl;
    // Can define string literal c strings, c++ will auto add null terminator char
    char message2 [] {"Hello"}
    // an implicit \0 is added to end of string making it a c string 
    // if no null termination character, garabge values may be printed






}