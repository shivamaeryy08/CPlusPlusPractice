#include <iostream>

// in memory data is still stored in linear fashion, it is not multi dimensional

// compiler takes care of assigning bits to multi dimensional array

int main () {
    // declare a 2d int array
    int numbers [4][3]; // 48 bytes suince 4 bytes = int * 12 numberss
    std::cout << "Size of numbers: " << sizeof(numbers) << std::endl;
    // element couint/size is 4 because 4 rows 
    std::cout << "element count in numbers: " << std::size(numbers) << std::endl;
    // when declaring 2d array, its just a buynch of garbage values
    for (size_t i{0}; i < std::size(numbers); ++i) {
        for (size_t j{0}; j < std::size(numbers[i]); ++j) {
            std::cout << "Element (" << i << " , " << j << "): " << numbers[i][j] << std::endl;
        }
    }
    std::cout << std::endl;
    // initilaize 2d array
    int numbers2 [4][3] {
        {1,2,3},
        {3,4,5},
        {1,2,3},
        {10,12,11}
    };
       for (size_t i{0}; i < std::size(numbers2); ++i) {
        for (size_t j{0}; j < std::size(numbers2[i]); ++j) {
            std::cout << "Element (" << i << " , " << j << "): " << numbers2[i][j] << std::endl;
        }
    }
    std::cout << std::endl;
    // intiializing a 3d array of games
    std::string games[2][2][2] {
        {
            {"Naruto", "Hunter hunter"},{"One piece"} // note any elements not included will just be autofileld with the equivalent of zero
        }, {
            {"DragonBall", "Zelda"},{"Bleach", "Blah blah"}
        }
    };
     for (size_t i{0}; i < std::size(games); ++i) {
        for (size_t j{0}; j < std::size(games[i]); ++j) {
         for (size_t w{0}; w < std::size(games[i][j]); ++w) {
              std::cout << "Element (" << i << " , " << j <<  " , " << w <<  "): " << games[i][j][w] << std::endl;
        }
        }
    }
    std::cout << std::endl;
    // when dlecaring an multi dimensiaonl array can omit number of rows
    
    // multi dimensiaonl char array
    const int number_col {15};
    char name[][number_col] { // the names are small enogh for null terminated character to be inserted
    // but if a name is 15 char's then could be garbage output
        {'S','h', 'i', 'v','a','m'},
        {'J','o','h','n'},
    };
    
    for (int i{}; i < std::size(name); ++i) std::cout << "Name: " << name[i] << std::endl;
     // better way to do it is using c string literals such as below, null char insterted automaitcally
     char name2[][number_col] {
        "Shivam",
        "John",
     };
    return 0;
}