//  Bond.cpp

// Including our bond header file
#include "Bond.h"
#include <iostream>

// We now declare the Bond initialization functionality as follows:
Bond::Bond()
{
    std::cout << "I have created a default Bond :)" << std::endl;

    // Setting the public variables that are associated with this class

    principal = 100.0;
    rate = 0.1;
    yearsToMaturity = 1;
    paymentType = 'A';
}