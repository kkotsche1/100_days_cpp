#include "BSM.h"
#include <stdio.h>  /* printf, scanf, puts, NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */

BSM::BSM(
    float assPrc,
    float strPrc,
    float gth,
    float vola,
    float yrs,
    long stps,
    long monsims)
{
    setBsmAssetPrice(assPrc);
    setBsmStrikePrice(strPrc);
    setBsmGrowth(gth);
    setBsmVolatility(vola);
    setBsmYears(yrs);
    setBsmSteps(stps);
    setBsmMonteCarloSims(monsims);
    srand(time(NULL)); // Initializing random number generator with a unique seed
};

// Function to generate a random number between min and max (inclusive)
double BSM::rn(int min, int max)
{
    // Ensure the function works even if min is greater than max
    if (min > max)
    {
        std::swap(min, max);
    }

    // rand() % (max - min + 1) generates a value in the range [0, max - min]
    // Adding min shifts the range to [min, max]
    return static_cast<double>(min + rand() % (max - min + 1));
}

BSM::~BSM()
{
}

void BSM::logNormalRandomWalk(){

};

double BSM::getCallPrice()
{
    return 0;
}

double BSM::getPutPrice()
{
    return 10;
}

float BSM::getBsmAssetPrice()
{
    return bsmAssetPrice;
};

float BSM::getBsmGrowth()
{
    return bsmMarketGrowth;
};

long BSM::getBsmMonteCarloSims()
{
    return bsmMonteCarloSims;
};

long BSM::getBsmSteps()
{
    return bsmSteps;
};

float BSM::getBsmStrikePrice()
{
    return bsmStrikePrice;
};

float BSM::getBsmVolatility()
{
    return bsmAssetVol;
};

float BSM::getBsmYears()
{
    return bsmYrsToExpiry;
}

void BSM::setBsmAssetPrice(float asstPrc)
{
    bsmAssetPrice = asstPrc;
};
void BSM::setBsmStrikePrice(float strkPrc)
{
    bsmStrikePrice = strkPrc;
};
void BSM::setBsmGrowth(float grwth)
{
    bsmMarketGrowth = grwth;
};
void BSM::setBsmVolatility(float vlt)
{
    bsmAssetVol = vlt;
};
void BSM::setBsmYears(float yrs)
{
    bsmYrsToExpiry = yrs;
};
void BSM::setBsmSteps(long stps)
{
    bsmSteps = stps;
};
void BSM::setBsmMonteCarloSims(long montsims)
{
    bsmMonteCarloSims = montsims;
};