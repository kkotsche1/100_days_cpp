#include <iostream>

// Specifying a global variable that is accesible across multiple files
extern int c;

int main()
{

    // Automatically determining data type
    auto a = 10;

    // Manually determining data type
    int b = 10;

    // Defining a static variable
    // Allocates the memory and keeps it allocated beyond scope until the program ends
    // If a function gets called many times you want variables to be static to save on
    // the time usually taken to allocate the memory to the variable
    static int d = 10;

    // If a variable is accessed a lot a lot it can be stored closer to the CPU than RAM
    // we store the variable into the register of the CPU if possible
    // if no register is available/free, the variable will be stored in RAM
    register int f = 10;

    // Further storage classes that will be introduced later
    // mutable
    // thread_local

    return 0;
}