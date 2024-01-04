#include <iostream>

// Including our Bond Header File
#include "Bond.h"

int main(int argc, const char *argv[])
{

    // We can now define an element with the class "Bond" which we define in the "Bond.h" file
    Bond basicBond;

    // We can access the public variable and functions associated with this class. In this
    // case the variables have been set via the constructor function
    // std::cout << "Bond Principal: " << basicBond.principal << std::endl; // prints Bond Principal: 100

    // If the variable are private we can access them via getter and setter functions as follows

    int yearsToMaturity = basicBond.getYearsToMaturity();
    std::cout << "Years to Maturity: " << yearsToMaturity << std::endl;
    std::cout << "Setting Bond Maturity to 5 Years" << std::endl;

    basicBond.setYearsToMaturity(5);
    std::cout << "Years to Maturity New: " << basicBond.getYearsToMaturity() << std::endl;

    // We can also initialize classes with variables directly
    Bond complexBond(999.9, 0.25, 17.9, 15, 'S');

    std::cout << "Complex Bond Principal: " << complexBond.getPrincipal() << std::endl;

    // Printing bond price
    std::cout << "Basic Bond Price: " << basicBond.getBondPrice() << std::endl;
    return 0;
}