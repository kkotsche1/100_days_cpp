#include <iostream>

// Pointers points to the memory address of some other things
// Every slot in our Random Access Memory has some specific memory address

int main()
{

    int a = 10;

    // a has a size of 4 bytes to store this integer. But where is this stored????
    std::cout << sizeof(a) << std::endl;

    // To print the memory address of something we use the "&" operator
    std::cout << &a << std::endl;

    // If we store the memory address in a variable this is the "pointer"
    int *myptr = &a;
    std::cout << myptr << std::endl;

    // We can also "dereference" the myptr and get whatever is stored at the address rather than the address itself
    // In order to do this we once again include the "*" infront of our variable name
    std::cout << *myptr << std::endl;

    // We can also update a variable using the * and pointer for a given variable
    *myptr = 20;
    std::cout << a << std::endl; // now prints "20"

    // If we define an array of integers, each integer takes up 4 bytes. So we take a starting memory address and
    // our array wil take up 4*length of array memory spaces in our RAM.

    int arr[100]; // This would take up 400 memory slots

    // Getting memory address of some item in our array
    std::cout << &arr[56] << std::endl;

    // The memory address of the array itself is equal to the memory address of the first element
    std::cout << &arr << std::endl;
    std::cout << &arr[0] << std::endl;

    return 0;
}