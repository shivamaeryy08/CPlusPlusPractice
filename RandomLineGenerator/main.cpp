#include <iostream>

// cannot change size of array at runtime, must be constant

int main () {
    bool end{false};
    const int name_max_length{15};
    char name [name_max_length]{};
    std::cout << "Enter your name: " << std::endl;
    std::cin.getline(name, name_max_length);
    unsigned const int max_len_prediction{100};
    char predictions[][max_len_prediction] {
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

    while (!end) {
        std::cout << "Dear " << name << " here is my prediction: ";
        int prediction_number {std::rand() % std::size(predictions)};
        std::cout << predictions[prediction_number] << std::endl;
        std::cout << "Want another prediction (Y OR N)? : " << std::endl;
        char continue_predictions;
        std::cin >> continue_predictions;
        if (static_cast<char>(tolower(continue_predictions)) == 'n') end = true;


    }
    std::cout << "I am done giving you predictions!" << std::endl;
}