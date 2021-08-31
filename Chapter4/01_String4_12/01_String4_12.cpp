#include <iostream>
#include <string>

int main(){

    std::string Name{};
    int age{};
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, Name);
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Your age + lenght of name is: " << age + static_cast<int>(Name.length());

    return 0;
}