#include "DurationBond.h"

// Here we create the constructor for the DurationBond which inherits from the Bond class

DurationBond::DurationBond(double prin,
                           double coup,
                           double mkt,
                           double yTM,
                           char typ) : Bond(prin, // We call the super constructor as seen here using the :
                                            coup, // followed by the constructor for the class that we inherit from
                                            mkt,
                                            yTM,
                                            typ)
{

    std::cout << "In The durationBond Constructor" << std::endl;
}

DurationBond::~DurationBond()
{
    std::cout << "In the deconstructor of durationbond" << std::endl;
}

double DurationBond::getDuration()
{
    return duration;
}

void DurationBond::setDuration(double dur)
{
    duration = dur;
}

double DurationBond::calculateDuration()
{
    // Get the current YTM of the bond
    double origMarketRate = getMarketRate();

    // Shock Interest rate factor is 'Y'm and its'
    // a difference between rates which we call delta

    double deltaY = DURATION_BOND_RATE_CHANGE;

    if (origMarketRate <= DURATION_BOND_RATE_CHANGE)
    {
        deltaY = origMarketRate - 0.0001;
    }

    // v1 is the CURRENT bond price
    double v1 = getBondPrice();

    // Shock the interest rate down by deltaY
    double bipsLower = origMarketRate - deltaY;

    // We will now set the market rate to the shocked rate
    setMarketRate(bipsLower);

    // We can now check the new bond price after shocking down the interest rate
    double v2 = getBondPrice();

    // Shocking interest rate up by deltaY
    double bipsHigher = origMarketRate + deltaY;

    // Setting Market Rate to the shocked up interest rate
    setMarketRate(bipsHigher);

    // Checking the bond price after shocking interest rates up
    double v3 = getBondPrice();

    // Calculating Bond duration
    // Duration = v2 - v3 / 2(V1)(DeltaY)

    double calcDuration = (v2 - v3) / (2 * v1 * deltaY);

    return calcDuration;
}