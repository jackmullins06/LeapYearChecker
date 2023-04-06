#include <iostream>
#include <string>
#include <cctype>

int promptForInput() {
    int year;
    std::string input;
    
    while (true) {
        std::cout << "Input a year: ";
        std::getline(std::cin, input);

        bool validInput = true;
        for (char c : input) {
            if (!std::isdigit(c)) {
                validInput = false;
                break;
            }
        }

        if (validInput) {
            try {
                year = std::stoi(input);
                break;
            } catch (const std::exception& e) { 
                std::cerr << "Error: " << e.what() << std::endl;
            }
        } else {
            std::cerr << "Error: Invalid input. Please enter a valid integer." << std::endl;
        }
    }

    return year;
}

bool isGregorianLeapYear(const int year) {
    const bool isGregorianLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    return isGregorianLeapYear;
}

bool isJulianLeapYear(const int year) {
    const bool isJulianLeapYear = (year % 4 == 0);
    return isJulianLeapYear;
}

int main() {
    const int year = promptForInput();
    if (year < 1582) {
        if (isJulianLeapYear(year)) {
            std::cout << year << " is a Julian leap year." << std::endl;
        } else {
            std::cout << year << " is not a Julian leap year." << std::endl;
        }
    } else if (isGregorianLeapYear(year)) {
        std::cout << year << " is a Gregorian leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }
    return 0;
}

