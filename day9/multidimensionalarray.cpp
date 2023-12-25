#include <iostream>

int main()
{

    // Defining and filling a two-dimensional array

    int multiDimensionalArray[5][4];

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            multiDimensionalArray[i][j] = i * j * 2;
        }
    }

    std::cout << multiDimensionalArray[3][3] << std::endl;

    return 0;
}