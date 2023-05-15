#include <iostream>

int main () {
    // int poitner to an int array
    // the array name cna be treated as potiner to first element of array but is a special ptr that identifies the array
    int scores[5]{1,2,3,43,5};
    int* p_score{scores}; // dont pass in with & operator since scores value is address of the array, called ptr decay loss of info -> cant deduce size
    std::cout << "Address of array: " << scores << std::endl;
    std::cout << "Address of array: " << p_score << std::endl;

    std::cout << "*p_scores: " << *p_score << std::endl;
    std::cout << "*scores: " << *scores << std::endl;
    std::cout << "p_score[1]: " << p_score[1] << std::endl;

    // ptrs can be reassigned to non array vars
    int num{4};
    p_score = &num;
    
    // cannot use std::size on pters




}