#include <iostream>
#include <string>
#include <algorithm>

int getNameCount()
{
    int amount_of_names{};
    std::cout << "Enter the amount of names you want to input: ";
    std::cin >> amount_of_names;
    return amount_of_names;
}

void fillNames(std::string *names_array, int length)
{
    for (int i{0}; i < length; ++i)
    {
        std::string temp_name{};
        std::cout << "Enter name #" << i + 1 << ": ";
        std::cin >> temp_name;
        names_array[i] = temp_name;
    }
}

void printNames(std::string *names_array, int length)
{
    for (int i{0}; i < length; ++i)
    {
        std::cout << "Name #" << i + 1 << ": " << names_array[i] << "\n";
    }
}

int main()
{
    int length{getNameCount()};
    auto *names{new std::string[length]{}};
    fillNames(names, length);
    std::cout << "\nHere is your sorted list:\n";
    std::sort(names, names + length);
    printNames(names, length);

    delete[] names;

    return 0;
}
