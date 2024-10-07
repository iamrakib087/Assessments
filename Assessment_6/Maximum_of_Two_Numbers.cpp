#include<iostream>
int main(){
    int num1, num2;
    // user input
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // check the maximum value
    if(num1 > num2) {
        std::cout << "The Maximum number is: " << num1;
    } else if (num1 < num2) {
        std::cout << "The Maximum number is: " << num2;
    }

}