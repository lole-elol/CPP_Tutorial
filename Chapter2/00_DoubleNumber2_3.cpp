#include <iostream>


int doubleNumber(int x){

    return 2*x;
}

int main(){

    int input {};
    std::cout << "Enter an interger: ";
    std::cin >> input;
    std::cout << "Doubled:" << doubleNumber(input);
    return 0;

}