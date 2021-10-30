#include <iostream>
#include <iterator>

int main()
{
    constexpr int array[]{4, 6, 7, 3, 8, 2, 1, 9, 5};

    for (int element{0}; element < static_cast<int>(std::size(array)); ++element)
    {
        std::cout << "element: " << element << " has a value of: " << array[element] << "\n";
    }
}