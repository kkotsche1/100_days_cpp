#include <iostream>

int main()
{

    int aInt[] = {101, 102, 103};

    // If we were to attempt to print the array by simply referencing it as a whole
    // we would end up printing the memory address of the first array item

    std::cout << aInt << std::endl;

    // If we want to print out the first element we can do so as follows:

    std::cout << aInt[0] << std::endl;

    // We can also loop through the array to print out all of the values
    int lengthOfArray = 3;

    for (int i = 0; i < lengthOfArray; i++)
    {

        std::cout << aInt[i] << std::endl;
    }

    return 0;
}