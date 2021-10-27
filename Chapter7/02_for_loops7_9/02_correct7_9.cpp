#include <iostream>

int main()
{

    // Print all numbers from 9 to 0
    //     for (unsigned int count{9}; count >= 0; --count)
    //         std::cout << count << ' ';

    //using unsigned int lets the loop run forever

    for (int count{9}; count >= 0; --count)
        std::cout << count << ' ';
}
