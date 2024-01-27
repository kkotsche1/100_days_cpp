#include <iostream>
#include "BSM.h"
#include <random>

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

int getRandomNumber(int min, int max)
{
    // Create a random device and use it to seed a Mersenne Twister engine
    std::random_device rd;
    std::mt19937 gen(rd());

    // Define the range for the distribution
    std::uniform_int_distribution<> distrib(min, max);

    // Generate and return the random number
    return distrib(gen);
}

// argv[0] is the name of the program
// argv[1] is the first variable we pass to the program

int main(int argc, const char *argv[])
{
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