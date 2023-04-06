#include <iostream>

// arrays are a way to set up a collection, so its a collection of items under one var name

// in memory its all 0's and 1's each row so to speak would be one item of the array

void unique_numbers(int numbers[]) {
    const unsigned int size_array = sizeof(numbers) / sizeof(numbers[0]);
    unsigned int unique_numbers[size_array];
    int count = 0;
    for (size_t i {}; i < size_array ; ++i) {
        for (size_t j {i+1}; j < size_array; ++j) {
            if (numbers[i] != numbers[j]) {
                ++count;
                continue;
            }
            if (count == size_array - 1 && j == size_array - 1 && numbers[i] != numbers[j]) {
                unique_numbers[i] = numbers[i];
                count = 0;
            }
        }
    }
        for (auto unique_number: unique_numbers) {
            std::cout << unique_number << std::endl;
        }  
    // std::cout << "The collection contains " << sizeof(unique_numbers) / sizeof(unique_numbers[0]) 
    // << " numbers, they are: " 
         

}
int main () {
    // use square brackets to access items starting from 0
    int scores[10]; // declare an array, says scores is an array storing 10 integers

    std::cout << scores[0] << std::endl; // all the values are garbage values since you didnt define any of them
    // array has boundaries HOWEVER C++ lets you read outside boundaries but youi will run into errors
    scores[0] = 1;
    std::cout << "Score index 0: " << scores[0] << std::endl;
    std::string names[2] {"Shivam", "Xyla"}; // delcare and initialize
    for (std::string name : names) std::cout << "Name: " << name << std::endl;
    // if you leave out some elemnts in initialzie theyre = 0
    // can omit size of array compiler finds size based on # of elements
    // can delcare array const cant modify array values via index
    // ARRAYS STORE ELEMENTS OF THE SAME TYPE NEVER DIFFERENT TYPE
    int numbers[5] {1,1,2,3,4};
    unique_numbers(numbers);


}