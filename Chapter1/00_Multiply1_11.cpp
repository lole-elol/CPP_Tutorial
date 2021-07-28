#include <iostream>

int main()
{

    int input{};
    std::cout << "Enter an interger: ";
    std::cin >> input;
    std::cout << "Double that number is: " << input * 2 << "\n";
    std::cout << "Triple that number is: " << input * 3 << "\n";

    return 0;
}