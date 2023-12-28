#include <iostream>
#include <iomanip>
#include <string.h>

// Making a long number print out pretty with commas in appropriate places and appropriate rounding

int main()
{

    // Creating a string as an array of chars
    char firstName[] = {'A', 'n', 'd', 'y', '\0'};

    // Creating a string using std::string
    std::string secondName = "James";

    // Declaring the number we want to print out pretty
    double inputDub = 87833433.309922;

    // Printing out our number in its original state
    std::cout << std::setprecision(30) << "inputDub: " << inputDub << std::endl;

    // Declaring an empty string that will hold the number with rounded decimal place
    char startStr[64];

    // Rounding the number from above to two decimal places and assigning it to the previously empty startStr
    std::sprintf(startStr, "%.2f", inputDub);

    // Printing out the number rounded to two decimal places
    std::cout << startStr << std::endl;

    // To now add commas in appropriate places we declare a new empty string
    char finalStr[128];

    // We check how long our starting string is
    long startStrLen = strlen(startStr);

    // We print out the length of our starting string
    std::cout << "startStrLen: " << startStrLen << std::endl;

    // printing out the string up to the dot

    long distToDot = startStrLen - 3; // We will hardcode it for the sake of this example
    long decreasingDist;

    int finalCount = 0;

    // We loop through the original string and append the letters to our final string. In addition we check to see if the char we
    // are inserting is a multiple of three which is our signal to insert a comma before it.
    for (int startCount = 0; startStr[startCount] != '\0'; startCount++)
    {
        decreasingDist = distToDot - startCount;

        if (startCount != 0 &&
            decreasingDist > 0 &&
            decreasingDist % 3 == 0)
        {
            finalStr[finalCount++] = ',';
        }
        finalStr[finalCount++] = startStr[startCount];
    }

    // Adding on the string end signal
    finalStr[finalCount] = '\0';

    std::cout
        << finalStr << std::endl;

    return 0;
}