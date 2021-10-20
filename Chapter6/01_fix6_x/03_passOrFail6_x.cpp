#include <iostream>
/*
bool passOrFail()
{
    static int counter{0};
    counter++;

    if (counter < 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}
*/

// sleeker alternative

bool passOrFail()
{
    static int s_passes = 3;
    --s_passes;
    return (s_passes >= 0);
}

int main()
{
    std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
    std::cout << "User #2: " << (passOrFail() ? "Pass\n" : "Fail\n");
    std::cout << "User #3: " << (passOrFail() ? "Pass\n" : "Fail\n");
    std::cout << "User #4: " << (passOrFail() ? "Pass\n" : "Fail\n");
    std::cout << "User #5: " << (passOrFail() ? "Pass\n" : "Fail\n");

    return 0;
}