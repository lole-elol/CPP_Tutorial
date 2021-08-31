#include <iostream>

int getInput(){
    int input{};
    std::cout << "Enter an integr: ";
    std::cin >> input;
    return input;
}

int main(){

    int smaller {getInput()};
    int larger {getInput()};

    if (smaller > larger)
    {
        std::cout << "Swapping values\n";
        int swap {larger};
        larger = smaller;
        smaller = swap;
    }

    std::cout << "The smaller value is " << smaller << "\n";
    std::cout << "The larger value is " << larger << "\n";

}