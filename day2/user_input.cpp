#include <iostream>

int main()
{

    // Defining a string to hold the users name
    std::string name;

    // Retrieving the users name through std::cin
    std::cout << "Please enter your name: ";
    std::cin >> name;

    // Printing out the users name
    std::cout << "Your name is: " << name << std::endl;

    // Waiting for user input before proceeding with rest of code or ending program
    std::cin.get();
}