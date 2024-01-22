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