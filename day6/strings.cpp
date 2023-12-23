#include <iostream>
#include <string.h>

void classicCString()
{

    // Since classic C had no classes, strings would be constructed as arrays of individual chars

    char text[10] = "Hello";
    std::cout << text << std::endl;
    text[0] = 'Y';
    std::cout << text << std::endl;

    // Every char array needs an end signal, so we always have to make our array at least 1 item larger than needed chars
    // char text[3] = "Hey" would not work
    // char text[4] = "Hey" does work

    // Printing the lenght of the char array
    std::cout << sizeof(text) << std::endl;

    // Printing the length of the string
    std::cout << strlen(text) << std::endl;
}

void cPlusPlusString()
{

    // In C++ we have the ability to use std::string which is a string class.
    std::string helloWorld = "Hello World!";
    std::string myname("Konstantin");

    std::cout << helloWorld << std::endl;
    std::cout << myname << std::endl;

    // Determining the length of a C++ String
    std::cout << myname.length() << std::endl;

    // Printing a specific character from within the string works as it does in regular C
    std::cout << myname[2] << std::endl;
    // Cleaner way of doing this would be:
    std::cout << myname.at(2) << std::endl;

    // Comparing strings

    if (helloWorld == myname)
    {
        std::cout << "SAME" << std::endl;
    }
    else
    {
        std::cout << "NOT SAME" << std::endl;
    }
}

void copyingStrings()
{
    // Copying a string to a new variable
    char ogString[6] = "Hello";
    char copiedString[100] = "***";

    // Comparing two strings
    // Returns 0 if they match, something else if they don't
    std::cout << strcmp(ogString, copiedString) << std::endl;

    // String Copy is super dangerous -> Can be used for buffer attacks
    strcpy(copiedString, ogString);

    // Comparing two strings again after making them equal
    std::cout << strcmp(ogString, copiedString) << std::endl;

    std::cout << copiedString << std::endl;
}

int main()
{

    cPlusPlusString();

    return 0;
}