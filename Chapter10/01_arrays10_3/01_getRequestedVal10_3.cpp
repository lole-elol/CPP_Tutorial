#include <iostream>
#include <iterator>

int getInput()
{
    int input{5};
    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> input;

        if (std::cin.fail())
            std::cin.clear(); // reset any error flags

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (input < 1 || input > 9);

    return input;
}

int main()
{
    int input{getInput()};
    constexpr int array[]{4, 6, 7, 3, 8, 2, 1, 9, 5};

    for (int element{0}; element < static_cast<int>(std::size(array)); ++element)
    {
        if (array[element] == input)
        {

            std::cout << "The value: " << input << " has the index: " << element << "\n";
        }
    }
}