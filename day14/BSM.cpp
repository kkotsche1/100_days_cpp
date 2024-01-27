#include "BSM.h"
#include <stdio.h>  /* printf, scanf, puts, NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */
#include <math.h>

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
};

// Function to generate a random number between min and max (inclusive)
double BSM::rn()
{
    return (double)rand() / (double)(RAND_MAX + 1.0);
};

BSM::~BSM(){};

void BSM::logNormalRandomWalk()
{
    srand((unsigned)time(0)); // Initializing random number generator with a unique seed

    double callPayoffPot = 0;
    double putPayoffPot = 0;

    // Determining Timesteps
    double timeStep = getBsmYears() / getBsmSteps();
    double sqrtTimeStep = sqrt(timeStep);

    // Outer loop for number of simulations
    for (long i = 1; i <= getBsmMonteCarloSims(); i++)
    {

        double assPrice = getBsmAssetPrice();

        // Inner loop for steps
        for (int j = 1; j <= getBsmSteps(); j++)
        {
            assPrice = assPrice * (1 + getBsmGrowth() * timeStep + getBsmVolatility() * sqrtTimeStep * (rn() + rn() + rn() + rn() + rn() + rn() + rn() + rn() + rn() + rn() + rn() + rn() - 6)); // We approximate phi
        };
        std::cout << assPrice << std::endl;
    }
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