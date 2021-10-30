#include <iostream>
#include <iterator>
#include <utility>

int main()
{
    int array[]{30, 50, 20, 10, 40, 90, 100, 126, 1, -1, 0, 5, 15, -2, 80, -3};
    constexpr int length{static_cast<int>(std::size(array))};

    // iterate over array
    for (int start_index{0}; start_index < length - 1; ++start_index)
    {
        // create vairable which holdes the current index we are comparing to
        int greatest_index{start_index};

        // iterate over array and compare indexess
        for (int current_index{start_index + 1}; current_index < length; ++current_index)
        {
            // when a greater value is found change set index accordingly
            if (array[current_index] > array[greatest_index])
            {
                greatest_index = current_index;
            }
        }
        // actually swap the values to the previously set indexes
        std::swap(array[start_index], array[greatest_index]);
    }

    for (int i{0}; i < length; ++i)
    {
        std::cout << array[i] << " ";
    }
}