#include <iostream>
#include <string>

int main() {
    int birthYear = 0;
    char hadBirthday = 'n';
    const int CURRENT_YEAR = 2026; // Hardcoded to 2026 as requested

    std::cout << "=================================\n";
    std::cout << "      AGE CALCULATOR (2026)      \n";
    std::cout << "=================================\n\n";

    
    while (true) {
        std::cout << "Enter your year of birth (e.g., 2004): ";
        
      
        if (std::cin >> birthYear && birthYear > 0 && birthYear <= CURRENT_YEAR) {
            break; 
        } else {
            std::cout << "❌ Invalid year. Please enter a valid past year.\n";
            std::cin.clear(); 
            std::cin.ignore(10000, '\n'); 
        }
    }

    
    std::cout << "Have you already had your birthday this year? (y/n): ";
    std::cin >> hadBirthday;

    
    int age = CURRENT_YEAR - birthYear;
    
    
    if (hadBirthday == 'n' || hadBirthday == 'N') {
        age--; 
    }

    
    std::cout << "\n---------------------------------\n";
    std::cout << "Birth Year : " << birthYear << "\n";
    std::cout << "Current Age: " << age << " years old\n";
    std::cout << "---------------------------------\n";

    return 0;
}