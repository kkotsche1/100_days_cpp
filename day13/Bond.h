// Bond.h

#ifndef BOND_H
#define BOND_H

class Bond
{
public:
    // Here we declare in the header file that the class Bond has a public constructor function
    // with this we enable the declaring and executing of the declared constructor function.
    Bond();

    // We overload the constructor function with some variable that can be passed when instantiating an element of the Bond class
    Bond(double, double, int, char);

    // Here we are declaring that this class contains a setPrincipal function which takes a touble and a getPrincipal
    // function which returns the principal value as double.
    void setPrincipal(double);
    double getPrincipal();

    void setRate(double);
    double getRate();
    void setYearsToMaturity(int);
    int getYearsToMaturity();
    void setPaymentType(char);
    char getPaymentType();

private:
    // We can define some private variables that are associated with this class allowing us to set them later.
    double principal;
    double rate;
    int yearsToMaturity;
    char paymentType; // 'A'nnual or 'M'onthly
};

#endif
