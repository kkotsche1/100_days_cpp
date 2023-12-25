#include <iostream>
#include <cmath>
#include <iomanip>

#define MONTHS_IN_YEAR 12

int main()
{

    // Asking the user to enter the principal amount of their loan
    std::cout << "Please enter a numeric value for the principal amount of your loan" << std::endl;
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

    // Initializing a variable to calculate our monthly payment
    double monthlyPayment = 0.0;

    // Calculating our monhtly payment
    monthlyPayment = principal * (monthlyInterest / (1 - (pow(1 + monthlyInterest, -monthsOfLoan))));

    // Informing the user of their monthly payment
    std::cout << "The monthly mortgage payment is: " << std::fixed << std::setprecision(2) << monthlyPayment << std::endl;

    // Initializing variables to track the payments we make over time
    double currInterestPayment = 0.0;
    double currPrincipalPayment = 0.0;
    double currBalance = principal;
    double totalInterestPaid = 0.0;

    // Initializing a variable which we will use to loop through all of the payment months
    long currentLoanMonth = 1;

    // Looping through our payment months
    while (currentLoanMonth <= monthsOfLoan)
    {

        // Calculating the interest payment
        currInterestPayment = currBalance * monthlyInterest;
        // Adding calculated interest payment to our total interest paid counter
        totalInterestPaid = totalInterestPaid + currInterestPayment;
        // Substracting interest portion from our monhtly payment to calculate principal payment
        currPrincipalPayment = monthlyPayment - currInterestPayment;
        // Subtracting principal payment from our principal balance
        currBalance = currBalance - currPrincipalPayment;

        // Informing the user over the current months payment details
        std::cout << "Month Number: " << currentLoanMonth << "      "
                  << "Interest Payment: " << currInterestPayment << "   Principal Payment: " << currPrincipalPayment << "   Remaining Balance: " << currBalance << std::endl;
        // Increasing our month counter by one
        currentLoanMonth++;
    }

    // Informing the user of the total amount of interest paid for this loan
    std::cout << "Total amount of interes paid: " << totalInterestPaid << std::endl;

    return 0;
}