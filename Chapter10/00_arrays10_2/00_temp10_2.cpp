#include <iostream>
#include <iterator>

namespace myanimals
{
    enum animlas
    {

        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max_animals
    };

}

int main()
{

    int legs[myanimals::max_animals]{2, 4, 4, 4, 2, 0};

    std::cout << "The elephant has " << legs[myanimals::elephant] << " legs\n";
    return 0;
}