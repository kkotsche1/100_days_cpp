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

    return 0;
}