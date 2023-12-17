#include <iostream>
#include "includes/myfile.h"

int x = 1000;
extern int test;

int main()
{
    std::cout << add_to_x(100) << std::endl;
    std::cout << test << std::endl;
    return 0;
}