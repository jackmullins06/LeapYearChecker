#include <iostream>

int promptForInput() {
    int year;
    std::cout << "Input a year: ";
    std::cin >> year;

    return year;
}

bool isLeapYear(int year) {
    bool isLeapYear;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        isLeapYear = true;
    } else {
        isLeapYear = false;
    }

    return isLeapYear;
}

int main() {
    if (isLeapYear(promptForInput())) {
        std::cout << "Leap year" << std::endl;
    } else {
        std::cout << "Not a leap year" << std::endl;
    }
}
