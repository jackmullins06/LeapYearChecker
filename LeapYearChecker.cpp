#include <iostream>

int promptForInput() {
    int year;
    std::cout << "Input a year: ";
    std::cin >> year;

    return year;
}

bool isLeapYear(const int year) {
    const bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    return isLeapYear;
}

int main() {
    if (isLeapYear(promptForInput())) {
        std::cout << "Leap year" << std::endl;
    } else {
        std::cout << "Not a leap year" << std::endl;
    }
}
