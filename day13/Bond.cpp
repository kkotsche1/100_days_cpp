//  Bond.cpp

// Including our bond header file
#include "Bond.h"
#include <iostream>

// We now declare the Bond initialization functionality as follows:
Bond::Bond()
{
    std::cout << "I have created a default Bond :)" << std::endl;

    // Setting the public variables that are associated with this class

    setPrincipal(100.0);
    setRate(0.1);
    setYearsToMaturity(1);
    setPaymentType('A');
}

// We can overload the initialization function and pass some variables to it from the initialization
// we now pass in the variable values directly upon initialization of the class object
Bond::Bond(double princ, double rate, int yrsToMat, char pymtType)
{
    setPrincipal(princ);
    setRate(rate);
    setYearsToMaturity(yrsToMat);
    setPaymentType(pymtType);
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