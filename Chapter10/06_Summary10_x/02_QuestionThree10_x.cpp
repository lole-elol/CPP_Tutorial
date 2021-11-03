#include <iostream>

void my_swap(int &a, int &b)
{
    int temp{a};
    a = b;
    b = temp;
}

int main()
{
    int a{3};
    int b{10};
    my_swap(a, b);
    std::cout << "a=" << a << "\n";
    std::cout << "b=" << b << "\n";

    return 0;
}