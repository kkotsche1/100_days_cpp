#include <iostream>

int main()
{

    int a;
    std::cin >> a;

    // If-Else Statements

    if (a > 10)
    {

        std::cout << "Your Number is Greater than 10" << std::endl;
    }
    else
    {
        std::cout << "Your number is smaller than or equal to 10" << std::endl;
    }

    switch (a)
    {
    case 8:
        std::cout << "The value was 8" << std::endl;
        break;
    case 9:
        std::cout << "The value was 9" << std::endl;
        break;
    default:
        std::cout << "You number is neither 8 or 9" << std::endl;
    }

    return 0;
}