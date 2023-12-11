#include <iostream>
#include <limits.h>

int main()
{

    // Numerical Data Dypes
    std::cout << "Short (short): " << sizeof(short) << std::endl;
    std::cout << "Integer (int): " << sizeof(int) << std::endl;
    std::cout << "Long (long): " << sizeof(long) << std::endl;
    std::cout << "Long Long (long long): " << sizeof(long long) << std::endl;

    std::cout << "Float: " << sizeof(float) << std::endl;
    std::cout << "Double: " << sizeof(double) << std::endl;

    // Using the limits.h library to check the min and max values of numerical data
    std::cout << INT_MAX << std::endl;
    std::cout << INT_MIN << std::endl;

    // Textual Data Types

    char c = 'k';

    std::cout << c << std::endl;

    // Boolean

    bool b = 0;
    std::cout << b << std::endl;

    bool x = true;
    std::cout << x << std::endl;

    return 0;
}