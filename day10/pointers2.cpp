#include <iostream>
#include <iomanip>

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

    int &aNewIntReference = aNewInt;

    std::cout << aNewIntReference << std::endl;

    aNewInt++;

    std::cout << aNewIntReference << std::endl;

    return 0;
}