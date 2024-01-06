// Bond.h

#ifndef BOND_H
#define BOND_H

class Bond
{
public:
    const char BOND_ANNUAL_TYPE = 'A';
    const char BOND_SEMIANNUAL_TYPE = 'S';
    const char BOND_QUARTERLY_TYPE = 'Q';
    // Here we declare in the header file that the class Bond has a public constructor function
    // with this we enable the declaring and executing of the declared constructor function.
    Bond();

    // We overload the constructor function with some variable that can be passed when instantiating an element of the Bond class
    Bond(double, double, double, int, char);

    // We can also create a deconstructor function which will run before the object is disposed from memory
    // we define this by including a tilde before the class name
    ~Bond();

    // getBondPrice() will be a function that returns a double and calculates the current price depending on maturitiy yeal
    double getBondPrice();

    // Here we are declaring that this class contains a setPrincipal function which takes a touble and a getPrincipal
    // function which returns the principal value as double.
    void setPrincipal(double);
    double getPrincipal();

    void setCouponRate(double);
    double getCouponRate();
    void setMarketRate(double);
    double getMarketRate();
    void setYearsToMaturity(int);
    int getYearsToMaturity();
    void setPaymentType(char);
    char getPaymentType();

private:
    // We can define some private variables that are associated with this class allowing us to set them later.
    double principal;
    double couponRate;
    double marketRate;
    int yearsToMaturity;
    char paymentType; // 'A'nnual or 'Q'uarterly or 'S'emiannualy
};

#endif
