//  Bond.cpp

// Including our bond header file
#include "Bond.h"
#include <iostream>
#include <cmath>

// We now declare the Bond initialization functionality as follows:
Bond::Bond()
{
    // We could for example print something to the console every time a variable of type Bond gets created
    // std::cout << "I have created a default Bond :)" << std::endl;

    // Setting the public variables that are associated with this class

    setPrincipal(100.0);
    setCouponRate(0.1);
    setYearsToMaturity(1);
    setPaymentType('A');
}

// We can overload the initialization function and pass some variables to it from the initialization
// we now pass in the variable values directly upon initialization of the class object
Bond::Bond(double princ, double coupRate, double mktRate, int yrsToMat, char pymtType)
{
    setPrincipal(princ);
    setCouponRate(coupRate);
    setMarketRate(mktRate);
    setYearsToMaturity(yrsToMat);
    setPaymentType(pymtType);
}

// We can also create a deconstructor function which will run before the object is disposed from memory
// we define this by including a tilde before the class name

~Bond();

// Function to calculate bond price

double Bond::getBondPrice()
{

    // Logic to calculate the bond price
    double bondPrice = 0;
    int scalingFactor = 0;

    // If else-if structure to determine the scaling factor depending on the bond type.
    if (getPaymentType() == BOND_ANNUAL_TYPE)
    {
        scalingFactor = 1;
    }
    else if (getPaymentType() == BOND_SEMIANNUAL_TYPE)
    {
        scalingFactor = 2;
    }
    else if (getPaymentType() == BOND_QUARTERLY_TYPE)
    {
        scalingFactor = 4;
    }

    // Calculating the coupon
    double coupon = getPrincipal() * (getCouponRate() / scalingFactor);

    // Calculating the numer of interest carrying periods
    double periods = getYearsToMaturity() * scalingFactor;

    double yield = getMarketRate() / scalingFactor;

    // We will now determine the present value of all the expected bond payouts
    double pvCoupons = (coupon * (1 - pow((1 + yield), -periods))) / yield;

    // We now need to determine the present value of the redemption sum
    double pvRedemption = getPrincipal() * pow((1 + yield), -periods);

    // The bond price is the sum of the present values of the coupons and redemption
    bondPrice = pvCoupons + pvRedemption;

    return bondPrice;
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
void Bond::setMarketRate(double rat)
{
    marketRate = rat;
};
void Bond::setCouponRate(double rat)
{
    couponRate = rat;
};
double Bond::getMarketRate()
{
    return marketRate;
};
double Bond::getCouponRate()
{
    return couponRate;
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