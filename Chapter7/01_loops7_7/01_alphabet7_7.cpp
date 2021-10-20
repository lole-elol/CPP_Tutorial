#include <iostream>


int main(){
    // 122 is the ascii value for lowercase z
    int z {122};
    // 97 is the ascii value for lowercase a
    int counter {97};
    while (counter <= z)
    {   
        std::cout << counter ;
        std::cout << " evaluates to: ";
        std::cout << static_cast<char>(counter) << "\n";

        ++counter ;
    }
    

}