#include <iostream>
#include <cmath>

#define MONTHS_IN_YEAR 12

int main()
{

    // Asking the user to enter the principal amount of their loan
    std::cout << "Please enter a numeric value for the principal amount of your loand" << std::endl;
    double principal = 0.0; // When we declare our new variable we assign it some value to reduce error likelihood
    std::cin >> principal;

    // Askin the user for the interest rate of the loan
    std::cout << "Please enter the interest rate as a decimal using '.'" << std::endl;
    double interest = 0.0;
    std::cin >> interest;

    // Asking the user for the loan duration
    std::cout << "Please enter the number of years the loan will be running for" << std::endl;
    int loanYears = 0;
    std::cin >> loanYears;

    double monthlyInterest = interest / MONTHS_IN_YEAR;
    long monthsOfLoan = loanYears * MONTHS_IN_YEAR;

    double monthlyPayment = 0.0;

    monthlyPayment = principal * (monthlyInterest / (1 - (pow(1 + monthlyInterest, -monthsOfLoan))));

    std::cout << "The monthly mortgage payment is: " << monthlyPayment << std::endl;

    return 0;
}