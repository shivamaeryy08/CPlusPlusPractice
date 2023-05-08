#include <iostream>

// cannot change size of array at runtime, must be constant

int main () {
    bool end{false};
    const int name_max_length{15};
    char name [name_max_length]{};
    std::cout << "Enter your name: " << std::endl;
    std::cin.getline(name, name_max_length);
    char prediction0[]{ "a lot of kinds running in the backyard!" };
    char prediction1[]{ "a lot of empty beer bootles on your work table." };
    char prediction2[]{ "you Partying too much with kids wearing weird clothes." };
    char prediction3[]{ "you running away from something really scary" };
    char prediction4[]{ "clouds gathering in the sky and an army standing ready for war" };
    char prediction5[]{ "dogs running around in a deserted empty city" };
    char prediction6[]{ "a lot of cars stuck in a terrible traffic jam" };
    char prediction7[]{ "you sitting in the dark typing lots of lines of code on your dirty computer" };
    char prediction8[]{ "you yelling at your boss. And oh no! You get fired!" };
    char prediction9[]{ "you laughing your lungs out. I've never seen this before." };
    while (!end) {
        std::cout << "Dear " << name << " here is my prediction: ";
        int prediction_number {std::rand() % 10};
        switch (prediction_number) {
            case 0:
            std::cout << prediction0 << std::endl;
            break;
            case 1:
            std::cout << prediction1 << std::endl;
            break;
            case 2:
            std::cout << prediction2 << std::endl;
            break;
            case 3:
            std::cout << prediction3 << std::endl;
            break;
            case 4:
            std::cout << prediction4 << std::endl;
            break;
            case 5:
            std::cout << prediction5 << std::endl;
            break;
            case 6:
            std::cout << prediction6 << std::endl;
            break;
            case 7:
            std::cout << prediction7 << std::endl;
            break;
            case 8:
            std::cout << prediction8 << std::endl;
            break;
            case 9:
            std::cout << prediction9 << std::endl;
            break;
            default:
            std::cout << "I have no prediction";


        }
        std::cout << "Want another prediction (Y OR N)? : " << std::endl;
        char continue_predictions;
        std::cin >> continue_predictions;
        if (static_cast<char>(tolower(continue_predictions)) == 'n') end = true;


    }
    std::cout << "I am done giving you predictions!" << std::endl;
}