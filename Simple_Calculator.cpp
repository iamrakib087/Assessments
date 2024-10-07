#include<iostream>
int main(){
    int num1, num2, op, out;
    // user input
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> op;

    // calculation
    switch(op){
        case '+':
            out = num1 + num2;
            break;
        case '-':
            out = num1 - num2;
            break;
        case '*':
            out = num1 * num2;
            break;
        case '/':
            if(num2 != 0){
                out = num1 / num2;
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