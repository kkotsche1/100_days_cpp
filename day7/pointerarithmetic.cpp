#include <iostream>

void function1()
{
    std::cout << "I AM FUNCTION ONE" << std::endl;
}

void function2()
{
    std::cout << "I AM FUNCTION TWO" << std::endl;
}

int main()
{

    int a = 10;

    int *ptr = &a;

    // We can add to the address pointer
    std::cout << ptr << std::endl;
    std::cout << ++ptr << std::endl;
    std::cout << ++ptr << std::endl;

    // If we now try to access our variable a using the pointer it will no longer work
    *ptr = 20;
    std::cout << a << std::endl;

    // We can iterate through pointers of an array as follows

    int arr[3] = {0, 1, 2};
    int *firstElementPointer = arr;

    for (int i = 0; i < 3; i++)
    {
        std::cout << *(firstElementPointer + i) << std::endl;
    }

    // NULL POINTERS

    int b = 7;
    int *ptr2 = &b;

    // We can make a pointer point to nothing after we are done using it to reduce the likelihood of something going wrong
    ptr2 = nullptr;

    // The following would now break out code since *ptr2 points to nothing: std::cout << *ptr2 << std::endl;

    // We can also declare void pointers that can point to any variable type

    bool boolean = true;
    void *voidptr = &boolean;

    // We can also create pointers for pointers

    int thisisanint = 17;
    int *intptr = &thisisanint;
    int **intpptr = &intptr;

    void (*myfunc)() = function2;

    myfunc();

    return 0;
}