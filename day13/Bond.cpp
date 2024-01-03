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

// Defining the functions we have placed in our Bond.h file

void Bond::setPrincipal(double prin)
{
    principal = prin;
};
double Bond::getPrincipal()
{
    return principal;
};
void Bond::setRate(double rat)
{
    rate = rat;
};
double Bond::getRate()
{
    return rate;
};
void Bond::setYearsToMaturity(int yTM)
{
    yearsToMaturity = yTM;
};
int Bond::getYearsToMaturity()
{
    return yearsToMaturity;
};
void Bond::setPaymentType(char pType)
{
    paymentType = pType;
};
char Bond::getPaymentType()
{
    return paymentType;
};