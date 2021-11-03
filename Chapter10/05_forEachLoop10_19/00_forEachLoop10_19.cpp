#include <iostream>
#include <string>
#include <string_view>

int main()
{
    constexpr std::string_view names[]{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

    std::cout << "Enter a name: ";
    std::string input{};
    std::cin >> input;

    bool found{false};

    for (const auto &name : names)
    {
        if (name == input)
        {
            found = true;
        }
    }

    if (found)
    {
        std::cout << input << " was found.";
    }
    else
    {
        std::cout << input << " was not found.";
    }

    return 0;
}