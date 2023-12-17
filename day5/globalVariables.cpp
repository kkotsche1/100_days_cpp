#include <iostream>
#include "includes/myfile.h"

int x = 1000;
extern int test;

// Defining a global variable, but only within this file necesitates a static tag
// The variable can be used with any function or code in this particular file
// but is not accessible via the extern keyword from other files

static int semiGlobal = 785;

int main()
{
    std::cout << add_to_x(100) << std::endl;
    std::cout << test << std::endl;
    return 0;
}