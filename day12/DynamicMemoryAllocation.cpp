#include <iostream>

int main(int argc, const char *argv[])
{

    int arraySize = 0;

    std::cout << "How big should the array be? " << std::endl;

    std::cin >> arraySize;

    // We can create variables after compilation using the new keyword
    // Here we ask the user how large the array should be and use
    // the user input to determine the array size.

    double *pDubArr = new double[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        pDubArr[i] = ((i + 1) * 100) + (i + 1);
    };

    for (int j = 0; j < arraySize; j++)
    {
        std::cout << "pDubArr[" << j << "]: " << pDubArr[j] << std::endl;
    };

    // We always have to delete the dynamically declared array after
    // we are done using it using "delete[]" for arrays and "delete"
    // for other variables

    delete[] pDubArr;

    return 0;
}