#include <iostream>

bool isEven(int x){
    return (x % 2) == 0;
}

int main (){

    int input{};
    std::cout << "Enter an intger: ";
    std::cin >> input;
    
    if (isEven(input))
    {
        std::cout << input << " is even\n";
    }
    else
    {
        std::cout << input << " is odd\n";
    }

    return 0;

}