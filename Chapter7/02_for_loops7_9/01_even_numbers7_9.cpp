#include <iostream>

// print every even number up to given number

int main()
{

    double input{};
    std::cout << "Enter a number: ";
    std::cin >> input;

    for (int i{0}; i <= input; i += 2)
    {
        // if (i % 2 == 0)
        // {
        //     std::cout << i << "\n";
        // }

        // maybe a bit faster
        std::cout << i << "\n";
    }
}