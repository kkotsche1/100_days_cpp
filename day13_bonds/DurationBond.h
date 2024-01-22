#include <iostream>
#include "Bond.h"

// With this notation, we are indicating that the DurationBond class will inherite
// Variables and methods. We won't be able to access the private elements of Bond though
class DurationBond : public Bond
{

public:
    DurationBond(double, double, double, double, char);

    ~DurationBond();

    // We will be creating a duration that is unique to the duration bond and not accessible via the standard bond
    double getDuration();
    void setDuration(double);

private:
    double duration;
};