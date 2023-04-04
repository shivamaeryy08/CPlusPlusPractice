#include <iostream>
#include <iomanip>

double CelToFarenheight(double temperature) {
 
    return (9.0/5) * temperature + 32;
}

double getBoxArea(double length, double width) {
    return length * width;
}

double getBoxVolume(double length, double width, double height) {
    return getBoxArea(length, width) * height;
}

int main () {
    double temperature;
    std::cout << "Celsius -> Farenheit Conversion: ";
    std::cin >> temperature;
    std::cout << std::setprecision(5);
    std::cout << "Celsius: " << temperature << ", Farenheight: " << CelToFarenheight(temperature) << std::endl; 
    double length;
    double width;
    double height;
    std::cout << "Length: ";
    std::cin >> length;
    std::cout << "Width: ";
    std::cin >> width;
    std::cout << "Height: ";
    std::cin >> height;
    std::cout << "Area: " << getBoxArea(length, width) << "Volume: " << getBoxVolume(length, width, height) << std::endl; 

}

