#include <iostream>
#include <iomanip>

int &maxNum(int &firstN, int &secondN)
{
    if (firstN > secondN)
    {
        return firstN;
    }
    else
    {
        return secondN;
    }
}

int main(int argc, const char *argv[])
{
    int anInt = 0;
    float aFloat = 0.0;
    double aDouble = 0.0;

    // Different variables take up different amounts of memory
    std::cout << "Sizeof Int: " << sizeof(anInt) << std::endl;
    std::cout << "Sizeof Float: " << sizeof(aFloat) << std::endl;
    std::cout << "Sizeof Double: " << sizeof(aDouble) << std::endl;

    // Printing out the memory address of each of the variables which we access with the ampersand

    std::cout << "Memory Address of Int: " << &anInt << std::endl;
    std::cout << "Memory Address of Double: " << &aFloat << std::endl;
    std::cout << "Memory Address of Flota: " << &aDouble << std::endl;

    // Assigning pointer variables

    int *pInt = &anInt;
    float *pFloat = &aFloat;
    double *pDouble = &aDouble;

    // Different variables take up different amounts of memory
    std::cout << "Sizeof pInt: " << sizeof(pInt) << std::endl;
    std::cout << "Sizeof pFloat: " << sizeof(pFloat) << std::endl;
    std::cout << "Sizeof pDouble: " << sizeof(pDouble) << std::endl;

    // We can also create conoined variables using pointer notation
    int aNewInt = 10;

    // aNewIntReference now holds the actual value that is being stored for the "aNewInt" variable
    int &aNewIntReference = aNewInt;

    std::cout << aNewIntReference << std::endl; // 10

    // Incrementing the "aNewInt" variable will also increment the "aNewIntReference" varibale
    aNewInt++;

    std::cout << aNewIntReference << std::endl; // 11

    // New Section - Use of References
    int firstNum = 42;
    int secondNum = 69;

    // We can also pass references to variables to certain functions. In this case, maxNum returns the reference to
    // firstNum or secondNum depending on which is larger. Since the function returns the reference to that variable
    // we can go ahead and set it to 99 which makes the value of the variable 99
    maxNum(firstNum, secondNum) = 99;

    std::cout << "First Num: " << firstNum << "     Second Num: " << secondNum << std::endl;

    return 0;
}