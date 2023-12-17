#include <iostream>

// Defining a global variable that is accessible anywhere in the file (and beyond)
int x = 100;

int main()
{

    x + 10;
    std::cout << x << std::endl;

    return 0;
}