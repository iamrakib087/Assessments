#include<iostream>
int main(){
    double num1, num2, out;
    char op;
    // user input
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> op;
    // calculation
    switch(op){
        case '+':
            out = num1 + num2;
            std::cout << "Result: " << out << std::endl;
            break;
        case '-':
            out = num1 - num2;
            std::cout << "Result: " << out << std::endl;
            break;
        case '*':
            out = num1 * num2;
            std::cout << "Result: " << out << std::endl;
            break;
        case '/':
            if(num2 != 0){
                out = num1 / num2;
                std::cout << "Result: " << out << std::endl;
            }
            else{
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                return 0;
            }
            break;
        default:
            std::cout << "Error: Invalid operation. Please choose (+, -, *, /)." << std::endl;
            return 0;
    }
}