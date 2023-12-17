#include <iostream>

// to avoid issues with functions calling each other and therefore not both being defined
// at some point we can declare functions up here and implement them down below

int add(int, int);
int add_default(int, int = 90);

int main()
{

    std::cout << add(10, 20) << std::endl;
    std::cout << add_default(90) << std::endl;

    return 0;
}

// This function would not be callable in main due to being defined below main
int add(int x, int y)
{
    return x + y;
}

// Default values
int add_default(int x, int y)
{
    return x + y;
}

//When calling a function often it makes sense to declare hard coded variables as static

void myfunction(){
    int x = 0;
    x++;
    std::cout << x << std:: endl;
}

// Will always print 1

void myfunctionSTATIC()
{
    static int x = 0;
    x++;
    std::cout << x << std::endl;
}

//Will print 1,2,3,4,5 ... This is due to the static keyword which keeps x allocated in memory