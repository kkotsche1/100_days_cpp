#include <iostream>

float divide(float f1, float f2)
{

    if (f2 == 0)
    {
        throw 15;
    }
    else
    {
        return f1 / f2;
    }
}

int main()
{
    // Try Catch logic
    try
    {
        divide(12, 0);
    }
    catch (int e)
    {
        std::cerr << "ERROR" << std::endl;
    }

    // The try catch logic will throw an error but continue running the program
    std::cout << divide(12, 2) << std::endl;

    return 0;
}