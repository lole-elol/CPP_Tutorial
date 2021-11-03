#include <iostream>

void printLikeC(char *ptr, int length)
{

    for (int i{0}; i < length; ++i)
    {
        std::cout << *ptr << " ";
        ++ptr;
    }
}

// faster way
void printLikeCFAST(const char *str)
{
    // While we haven't encountered a null terminator
    while (*str != '\0')
    {
        // print the current character
        std::cout << *str;

        // and point str at the next character
        ++str;
    }
}

int main()
{

    char my_string[]{"Hello, world!"};
    int length{sizeof(my_string)};
    printLikeC(my_string, length);
    printLikeCFAST(my_string);

    return 0;
}