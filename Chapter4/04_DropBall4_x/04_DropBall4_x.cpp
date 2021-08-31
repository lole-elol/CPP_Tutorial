#include <iostream>


double getHeight(){
    double height{};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> height;
    return height;
}

void calcAndPrintCurrenHeight(double initial_height){
    constexpr double g {9.8};
    double current_height {initial_height};
    double seconds {0};
    constexpr double increment {0.5};
    while (current_height > 0){
        current_height = initial_height - (g*(seconds*seconds))/2;
        if (current_height > 0)
        { 
            std::cout << "At " << seconds << " seconds, the ball is at height: " << current_height << " meters\n";
        }
        else 
        {
            std::cout << "At " << seconds << " seconds the Ball has hit the ground";
        }
        seconds = seconds + increment;
    }

}

int main (){
    calcAndPrintCurrenHeight(getHeight());
    return 0; 
}