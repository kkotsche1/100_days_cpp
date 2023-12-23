#include <iostream>

enum Color
{
    RED,
    GREEN,
    BLUE,
    PURPLE,
    ORANGE
};

int main()
{
    Color myColor = RED;
    std::cout << myColor << std::endl; // prints out the index of RED in our enum object which is 0

    std::cout << ORANGE << std::endl; // prints out the index of ORANGE in our enum object which is 4

    return 0;
}