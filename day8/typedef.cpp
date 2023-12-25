#include <iostream>
#include <bits/stdc++.h>
#include <stdint.h>

// "unsigned" is a keyword used to declare variables that can only store non-negative (positive or 0)
// numbers. A "signed" integer on the other hand can store both positive and negative numbers

// We can assign some variable types to a custom name
// This can be used for improved readability and typesafety.
typedef unsigned int age_t;

// What if we want to define a type that takes up exactly 1 byte of memory?
typedef unsigned char byte_t;

// We can also define types with custom bit sizes
typedef std::bitset<8> custom8bit;

int main()
{

    age_t age = 10;

    // Since age_t is technically an unsigned integer we can use it like any other unsigned integer
    std::cout << age * age << std::endl;

    byte_t b = 70;

    // This will print out F instead of "70" as byte_b is of type unsigned char
    std::cout << b << std::endl;

    // If we unsign b we can print the value which we assigned to it "70"
    std::cout << unsigned(b) << std::endl;

    custom8bit bit8 = 200;
    std::cout << bit8 << std::endl;

    return 0;
}