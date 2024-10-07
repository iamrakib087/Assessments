#include<iostream>
int main(){
    int year;
    // user input
    std::cout << "Enter a year: ";
    std::cin >> year;

    // check if the year is a leap year
    if((year % 4 == 0 && year % 100!= 0) || (year % 400 == 0)) {
        std::cout << year << " is a leap year.";
    } else {
        std::cout << year << " is not a leap year.";
    }
    return 0;
}