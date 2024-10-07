#include<iostream>
int main(){
    int i;
    // Looping 1 to 50
    for(i=1; i<=50; i++) {
        // Check multiple of 3 and 5
        if(i%3==0 && i%5==0){
            std::cout << "FizzBuzz";
        }
    // Check multiple of 3
        else if(i%3==0){
            std::cout << "Fizz";
        }
    // Check multiple of 5
        else if(i%5==0){
            std::cout << "Buzz";
        }
    // if no multiple numbers
    else{
            std::cout << i;
        }
    //Adding commas and spaces between numbers
    if(i<50){
        std::cout << ", ";
    }
    }
    return 0;
}