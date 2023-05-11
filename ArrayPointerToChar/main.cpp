#include <iostream>

int main () {
// optmial in comparison to a 2 dimen char array since we dont specify size of array in memory
// we lose no memory
const char* predictions[] {
     "a lot of kinds running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
         "you yelling at your boss. And oh no! You get fired!",
};

// will print first letter of each prediction
for (auto prediction : predictions) std::cout << prediction << std::endl;



}