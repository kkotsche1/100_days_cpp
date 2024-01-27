#include <iostream>

class BSM
{
public:
    BSM(
        float, float, float, float, float, long, long);

    float getBsmAssetPrice(){};
    float getBsmStrikePrice(){};
    float getBsmGrowth(){};
    float getBsmVolatility(){};
    float getBsmYears(){};
    long getBsmSteps(){};
    long getBsmMonteCarloSims(){};

    void logNormalRandomWalk();

    double getCallPrice();
    double getPutPrice();

    double mimicRandomNumber();

    BSM::~BSM()
    {
        std::cout << "THIS IS THE BLACK SCHOLES MODEL DESTRUCTOR CHECKING IN";
    }

private:
    float bsmAssetPrice;
    float bsmStrikePrice;
    float bsmMarketGrowth;
    float bsmAssetVol;
    long bsmSteps;
    long bsmMonteCarloSims;
};