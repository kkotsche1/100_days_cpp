#include <iostream>

// We can assign some variable types to a custom name
// This can be used for improved readability and typesafety.
typedef unsigned int age_t;

int main()
{

    age_t age = 10;

    // Since age_t is technically an unsigned integer we can use it like any other unsigned integer
    std::cout << age * age << std::endl;

    return 0;
}