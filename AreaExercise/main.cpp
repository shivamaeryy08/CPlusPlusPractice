#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>

double getAreaHexagon (double side_length) {
    return ((3/2.0)*std::sqrt(3))*std::pow(side_length,2);
   
}
int main () {
    std:: cout << std::setprecision(7);
    std::cout << "Area of hexagon with side length 3.6 is: " << getAreaHexagon(3.0) << std::endl;
}

 