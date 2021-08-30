#include <iostream>


int readNumber(){
    int input {};
    std::cout << "Enter first Number: ";
    std::cin >> input;
    return input;
}

void writeAnswer( int x){
    std::cout << "The answer is: " << x;
}

int main(){
    writeAnswer(readNumber() + readNumber());
}