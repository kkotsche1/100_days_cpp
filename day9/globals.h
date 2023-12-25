// Defining our global constants in a globals.h file

const int gMonthsInYear = 12;

struct gAmortizeMonth
{
    int year;
    int yearMonth;
    long loanMonth;
    double payment;
    double pureInterest;
    double paidDownPrincipal;
    double principalBalance;
};