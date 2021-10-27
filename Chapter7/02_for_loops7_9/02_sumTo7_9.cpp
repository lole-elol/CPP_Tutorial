#include <iostream>

double sumTo(double value)
{

    double sum{};
    for (int i{1}; i <= value; ++i)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    double input{};
    std::cout << "Enter a number: ";
    std::cin >> input;
    std::cout << sumTo(input);
}
