#include <iostream>

int main()
{
    int input1{};
    int input2{};

    std::cout << "Enter an integer: ";
    std::cin >> input1;
    std::cout << "Enter another integer: ";
    std::cin >> input2;
    std::cout << input1 << " + " << input2 << " is " << input1 + input2 << ".\n";
    std::cout << input1 << " - " << input2 << " is " << input1 - input2 << ".\n";

    return 0;
}