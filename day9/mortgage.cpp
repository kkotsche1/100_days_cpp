#include <iostream>
#include <cmath>
#include <iomanip>
#include "globals.h"

enum AmortizeProgram
{
    LOAN_PRINCIPAL = 1,
    INTEREST_RATE = 2,
    YEARS_OF_LOAN = 3,
};

enum AmortEnum
{
    YR_OUT = 2,
    MN_OUT = 2,
    CUM_MN_OUT = 5,
    PAYMENT_OUT = 12,
    INTEREST_OUT = 12,
    PRINCIPAL_OUT = 12,
    BALANCE_OUT = 16
};

int main(int argc, char *argv[])
{
    double principal = 0.0; // When we declare our new variable we assign it some value to reduce error likelihood
    double interest = 0.0;
    int loanYears = 0;

    if (argc == 1)
    {
        // Asking the user to enter the principal amount of their loan
        std::cout << "Please enter a numeric value for the principal amount of your loan" << std::endl;
        std::cin >> principal;

        // Askin the user for the interest rate of the loan
        std::cout << "Please enter the interest rate as a decimal using '.'" << std::endl;
        std::cin >> interest;

        // Asking the user for the loan duration
        std::cout << "Please enter the number of years the loan will be running for" << std::endl;
        std::cin >> loanYears;
    }
    else
    {
        // Getting the Principal, Interest and LoanYears from Commandline Inputs
        principal = atof(argv[LOAN_PRINCIPAL]);
        interest = atof(argv[INTEREST_RATE]);
        loanYears = atoi(argv[YEARS_OF_LOAN]);
    }
    // Here we are using the global denoted by the leading g which we imported from globals.h with the #include "globals.h" statement
    double monthlyInterest = interest / gMonthsInYear;
    long monthsOfLoan = loanYears * gMonthsInYear;

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

    gAmortizeMonth amortMonth;
    amortMonth.year = 1;
    amortMonth.yearMonth = 1;

    // Printing out a header row
    std::cout << std::setw(YR_OUT) << "Yr/Mth"
              << " " << std::setw(CUM_MN_OUT) << "Tot. Months"
              << " " << std::setw(PAYMENT_OUT) << "Amount Paid"
              << " " << std::setw(INTEREST_OUT) << "Interest Pymt"
              << " " << std::setw(PRINCIPAL_OUT) << "Principal Pymt"
              << " " << std::setw(BALANCE_OUT) << "Balance" << std::endl;
    std::cout << "" << std::endl;

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
        currBalance = abs(currBalance - currPrincipalPayment);

        amortMonth.loanMonth = currentLoanMonth;
        amortMonth.payment = monthlyPayment;
        amortMonth.paidDownPrincipal = currPrincipalPayment;
        amortMonth.principalBalance = currBalance;
        amortMonth.pureInterest = currInterestPayment;

        // Informing the user over the current months payment details
        std::cout << std::setw(YR_OUT) << amortMonth.year << " " << std::setw(MN_OUT) << amortMonth.yearMonth << " " << std::setw(CUM_MN_OUT) << amortMonth.loanMonth << " " << std::setw(PAYMENT_OUT) << amortMonth.payment << " " << std::setw(INTEREST_OUT) << amortMonth.pureInterest << " " << std::setw(PRINCIPAL_OUT) << amortMonth.paidDownPrincipal << " " << std::setw(BALANCE_OUT) << amortMonth.principalBalance << std::endl;
        // Increasing our month counter by one
        currentLoanMonth++;

        amortMonth.yearMonth++;
        if (amortMonth.yearMonth == 13)
        {
            amortMonth.yearMonth = 1;
            amortMonth.year++;
        }
    }

    // Informing the user of the total amount of interest paid for this loan
    std::cout << "Total amount of interes paid: " << totalInterestPaid << std::endl;

    return 0;
}