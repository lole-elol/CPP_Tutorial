/*
X X X X 1
X X X 2 1
X X 3 2 1
X 4 3 2 1
5 4 3 2 1
*/



#include <iostream>

// Loop between 1 and 5
int main()
{
    int amount_rows {10};
    int outer{ 1 };
    while (outer <= amount_rows)
    {
        // loop between 1 and outer
        int inner{ 1 };
        int ii {amount_rows -1};
        while(ii >= outer){

            std::cout << "  ";
            --ii;
            
        }
        while (inner <= outer)
        {   
            std::cout << inner << ' ';
            ++inner;
        }

        // print a newline at the end of each row
        std::cout << '\n';
        ++outer;
    }

    return 0;
}