#include <iostream>
#include "Bond.h"

// With this notation, we are indicating that the DurationBond class will inherite
// Variables and methods. We won't be able to access the private elements of Bond though
class DurationBond : public Bond
{

public:
    DurationBond(double, double, double, double, char);

    ~DurationBond();

private:
};