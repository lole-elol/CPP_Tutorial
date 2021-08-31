#include <iostream>


int main(){

    std::cout << "Enter a single diget integer: ";
    int input {};
    std::cin >> input;
    while (input > 9)
    {
        std::cout << "Your number is not a single diget integer!\n";
        std::cout << "Enter a single diget integer: ";
        std::cin >> input;
    }
    {  
        if (input == 2 || input == 3 || input == 5 || input == 7)
        {
            std::cout << "Your number is a prime";
        }
        else
        {
            std::cout << "Your number is not a prime";
        }
    }

}