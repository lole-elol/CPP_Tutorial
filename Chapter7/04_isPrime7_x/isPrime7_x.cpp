#include <iostream>
#include <cassert>

bool isPrime(int x)
{
    int divisors{1};
    for (int i{2}; i <= x; ++i)
    {
        if (x % i == 0)
        {
            ++divisors;
        }
    }
    return (divisors == 2);
}

int main()
{
    double input{};
    std::cout << "Check for primes in range 1 to: ";
    std::cin >> input;
    for (int i{1}; i <= input; ++i)
    {
        if (isPrime(i))
        {
            std::cout << "found prime: " << i << "\n";
        }
    }

    std::cout << "Success!";

    return 0;
}