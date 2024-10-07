#include <iostream>
int main(){
    int number;
    // user input
    std::cout << "Enter a number: ";
    std::cin >> number;

    // check if the number is even or odd
    if(number%2 == 0) {
        std::cout << number << " is an even number.";}
    else{
        std::cout << number << " is an odd number.";
    }
    return 0;
}