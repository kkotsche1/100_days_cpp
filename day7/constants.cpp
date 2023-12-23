#include <iostream>

int main()
{

    // Constants can only be defined, they are read only.
    // Best Practices is to make constant names uppercase.

    const int A = 10;

    std::cout << A << std::endl;
    std::cout << A + 10 << std::endl;

    // The following things wouldn't work:
    // A = 20;
    // A++

    // We can also define constant pointers
    int b = 10;
    int c = 30;

    // First way of declaring a constant pointer where the value we point to has to be treated as a constant
    const int *p1 = &b;
    // If we tried to change the value using this pointer "*p1 = 20;" this would not work.
    // We could however change what p1 is pointing to
    p1 = &c;

    // The second way of declaring a constant pointer makes the address we point to constant whereas the value can be changed
    int *const p2 = &b;
    // If we tried to change the address we are pointing to "p2 = &c" this would not work
    // we can however change the actual value stored at the address
    *p2 = 50;

    // We could also make the address we point to and the value that is stored there constant
    const int *const p3 = &c;

    return 0;
}