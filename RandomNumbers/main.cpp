#include <iostream>
#include <ctime>


int main () {
    // seed from current time
    std::srand(std::time(0));
    // std::rand() generates random numbers bet 0 and rand_max
    int random_num = std::rand();
    std::cout << "Random number: " << random_num << std::endl;
    // with limited range can use module of result of std::rand()
    // if you do (std::rand() % x) then range is 0 to x - 1
    // if you do (std::rand() % x) + 1 then range is 1 to x
    // std::rand generates same sequence each time program runs
    // Have to use seed to generate different resutls each run
    random_num = std::rand() % 11;
    std::cout << "Random number: " << random_num << std::endl;

    return 0;
}