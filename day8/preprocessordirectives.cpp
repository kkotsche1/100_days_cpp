// Preprocessor directives make some change to our code before it is actually compiles
// #include <iostream> for example is a preprocessor directive which gets everything written in iostream and includes it in this file
#include <iostream>

// We can also define some macros. This is different from a variable as it simply replaces any instance
// of "PI" with 3.14159 prior to ever compiling the code. So the code we run sees 3.14159 not PI
#define PI (3.14159)
#define SHM_NAME "Hello World!"
#define CONDITION1
#define CONDITION2

// To prevent infinite code inclusions when we have a circular #include reference situation with multiple files including each other
// we can declare every inclusion to only occur once as follows:
#pragma once

int main()
{

// We can also throw an error if for example two conditions are defined when only one should be
#ifdef CONDITION1
#ifdef CONDITION2
// #error
#endif
#endif

    // We can also check if macros are defined before executing some code
#ifdef TRIGGER
    std::cout << "TRIGGER is defined" << std::endl;
#endif
#ifndef TRIGGER
    std::cout << "TRIGGER is not defined" << std::endl;
#endif

    std::cout << PI << std::endl;
    std::cout << SHM_NAME << std::endl;

    return 0;
}