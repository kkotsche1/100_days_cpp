#include <iostream>

int main()
{

    // Defining an array "myarray" that can hold 20 integers
    int myarray[20];

    // The following for loop will print out random numbers which the array is pre-filled with
    // We are simply re-allocating existing RAM memory to the array, so whatever was in these memory
    // spaces before is now in this array.
    for (int i = 0; i < 20; i++)
    {
        std::cout << myarray[i] << std::endl;
    }

    // If we need to define an int array with pre-determined values we can do it as follows, if we provide less
    // than 20 values the rest will be filled with 0's:
    int mycustomarray[20] = {17, 29, 32};

    for (int i = 0; i < 20; i++)
    {
        std::cout << mycustomarray[i] << std::endl;
    }

    // Defining the 5th item of the empty array
    mycustomarray[4] = 235;

    std::cout << mycustomarray[4] << std::endl;

    return 0;
}