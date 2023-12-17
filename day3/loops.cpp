#include <iostream>

int main()
{

    // classic while loop
    int i;
    std::cin >> i;

    while (i >= 0)
    {
        std::cout << i-- << std::endl;
    }

    // The following always execute the code at least one and then checks a condition to determine
    // if it continue executing the loops or continues beyond it

    do
    {
        std::cout << "Whoop whoop" << std::endl;
    } while (false);

    // For loop
    for (int i = 0; i < 20; i++)
    {
        std::cout << i << std::endl;
    }

    return 0;
}