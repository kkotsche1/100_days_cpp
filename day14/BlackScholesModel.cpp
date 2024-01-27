#include <iostream>
// #include "BSM.h"
#include <stdio.h>  /* printf, scanf, puts, NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */

enum BSMExecution
{
    ASSET_PRICE = 1,
    STRIKE_PRICE = 2,
    GROWTH = 3,
    VOLATILITY = 4,
    YEARS = 5,
    STEPS = 6,
    SIMULATIONS = 7
};

// Function to generate a random number between min and max (inclusive)
int getRandomNumber(int min, int max)
{
    // Ensure the function works even if min is greater than max
    if (min > max)
    {
        std::swap(min, max);
    }

    // rand() % (max - min + 1) generates a value in the range [0, max - min]
    // Adding min shifts the range to [min, max]
    return min + rand() % (max - min + 1);
}

// argv[0] is the name of the program
// argv[1] is the first variable we pass to the program

int main(int argc, const char *argv[])
{

    srand(time(NULL)); // Initializing random number generator with a unique seed

    BSM bsm(
        atof(argv[ASSET_PRICE]),  // turning the first position item from string to double
        atof(argv[STRIKE_PRICE]), // Srike price of our options
        atof(argv[GROWTH]),       // overall market growth
        atof(argv[VOLATILITY]),   // underlying asset volatility
        atof(argv[YEARS]),        // years until option expirations
        atol(argv[STEPS]),        // number of steps, more steps = more accuracy but slower execution
        atol(argv[SIMULATIONS])); // more simulations = more accurate, but slower

    // Let us print out the attributes to ensure everything worked out
    std::cout << "ASSET PRICE: " << bsm.getBsmAssetPrice() << std::endl
              << std::cout << "STRIKE PRICE: " << bsm.getBsmStrikePrice() << std::endl
              << std::cout << "MARKET GROWTH: " << bsm.getBsmGrowth() << std::endl
              << std::cout << "ASSET VOLATILITY: " << bsm.getBsmVolatility() << std::endl
              << std::cout << "YEARS TO EXPIRY: " << bsm.getBsmYears() << std::endl
              << std::cout << "STEPS TO TAKE: " << bsm.getBsmSteps() << std::endl
              << std::cout << "NUMBER OF SIMULATIONS: " << bsm.getBsmMonteCarloSims() << std::endl;

    // Running the simulations
    bsm.logNormalRandomWalk();

    // Printing out our simulation results
    std::cout << std::endl; // printing empty lines
    std::cout << "CALL OPTION PRICE: " << bsm.getCallPrice() << std::endl;
    std::cout << "PUT OPTION PRICE: " << bsm.getPutPrice() << std::endl;

    return 0;
};