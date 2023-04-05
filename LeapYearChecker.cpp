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
    int year = promptForInput();
    if(isLeapYear(year)) {
        std::cout << year << " is a leap year." << std::endl;
    } else{
        std::cout << year << " is not a leap year." << std::endl;
    }
    return 0;
}
