#include <iostream>

int main() {
    double length, width;
    std::cout << "Enter length and width: ";
    std::cin >> length >> width;
    
    std::cout << "Area: " << (length * width) << "\n";
    std::cout << "Perimeter: " << (2 * (length + width)) << "\n";
    return 0;
}