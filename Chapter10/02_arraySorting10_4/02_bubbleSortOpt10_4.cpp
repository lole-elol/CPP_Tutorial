#include <iostream>
#include <iterator>
#include <utility>

int main()
{
    int array[]{6, 3, 2, 9, 7, 1, 5, 4, 8};
    constexpr int length{static_cast<int>(std::size(array))};

    for (int index{0}; index < length - 1; ++index)
    {
        bool flag{false};

        for (int comp_index{0}; comp_index < length - 1 - index; ++comp_index)
        {
            if (array[comp_index] > array[comp_index + 1])
            {
                std::swap(array[comp_index], array[comp_index + 1]);
                flag = true;
            }
        }
        if (!flag)
        {
            std::cout << "Early termination: " << index + 1 << "\n";
            break;
        }
    }

    for (int i{0}; i < length; ++i)
    {
        std::cout << array[i] << " ";
    }
}