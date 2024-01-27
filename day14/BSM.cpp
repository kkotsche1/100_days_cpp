#include "BSM.h"

BSM::BSM(
    float AssetPrice,
    float StrikePrice,
    float Growth,
    float Volatility,
    float Years,
    long Steps,
    long MonteCarolSims){

};

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

BSM::~BSM() {}

void BSM::logNormalRandomWalk(){

};

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
