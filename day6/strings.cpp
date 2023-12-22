#include <iostream>

int main()
{

    char text[10] = "Hello";
    std::cout << text << std::endl;
    text[0] = 'Y';
    std::cout << text << std::endl;

    return 0;
}