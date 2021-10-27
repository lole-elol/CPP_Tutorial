#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen{myConstants::gravity * seconds * seconds / 2};
    double heightNow{initialHeight - distanceFallen};

    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

void calculateAndPrintHeight(double initialHeight, int time)
{
    std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << "\n";
}

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    std::cin >> initialHeight;
    double time{0};
    double current_height{initialHeight};
    while (current_height)
    {
        current_height = calculateHeight(initialHeight, time);
        std::cout << "At " << time << " seconds, the ball is at height: " << current_height << "\n";
        ++time;
    }
    return 0;
}