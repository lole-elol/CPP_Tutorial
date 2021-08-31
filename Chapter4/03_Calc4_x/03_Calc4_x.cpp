#include <iostream>
#include <string>


double enterDouble(){
    double x {};
    std::cout << "Enter a double value: ";
    std::cin >> x;
    return x;
}

char pickOperator(){
    char op {};
    std::cout << " Enter one of the following: +, -, *, or /: ";
    std::cin >> op;
    return op;
}

double calcResult (double first, double second, char op){
    
    if (op == '*')
    {
        return first *second;
    }
    else if (op == '+')
    {
        return first + second;
    }
    else if (op == '-')
    {
        return first -second;
    }
    else if (op == '/')
    {
        return first / second;
    }

}

int main(){

    double first_value { enterDouble() };
    double second_value { enterDouble() };
    char op { pickOperator() };

    std::cout << first_value << " " << op << " " << second_value << " is " << calcResult(first_value, second_value, op);

    return 0;
}