#include <iostream>

int calculate(int x, int y, char op){

    switch (op)
    {
    case '*':
        return x*y;
    case '+':
        return x+y;
    case '/':
        return x/y;
    case '-':
        return x-y;
    case '%':
        return x%y;
    
    default:
        std::cout << "Invalide operator";
    }

}

int getInput(){
    int x {};
    std::cout << "Enter an integr: ";
    std::cin >> x;
    return x;
}

char getOperator(){
    char x {};
    std::cout << "Enter an operator: ";
    std::cin >> x;
    return x;
}

int main(){

    int x {getInput()};
    char op {getOperator()};
    int y {getInput()};
    
    std::cout << "Result: " << calculate(x, y, op);

    return 0;

}