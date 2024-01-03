#include <iostream>

// Including our Bond Header File
#include "Bond.h"

int main(int argc, const char *argv[])
{

    // We can now define an element with the class "Bond" which we define in the "Bond.h" file
    Bond basicBond;

    // We can access the public variable and functions associated with this class. In this
    // case the variables have been set via the constructor function
    std::cout << "Bond Principal: " << basicBond.principal << std::endl; // prints Bond Principal: 100

    return 0;
}