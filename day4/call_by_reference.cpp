#include <iostream>

void myfunction(int x)
{
    x++;
    std::cout << x << std::endl;
}

void myfunctionaddress(int &x)
{
    x++;
    std::cout << x << std::endl;
}

int main()
{

    int a = 10;
    myfunction(a);
    std::cout << a << std::endl;

    // would print 10 because we are not operating on the memory of a within the myfunction that we pass a to.

    int b = 12;
    myfunctionaddress(b);
    std::cout << b << std::endl;

    // this prints 13 because in the function declaration we access the underlying memory of the passed variable rather than the variable contents

    // Creating Aliases

    int i1 = 10;
    int &integer1 = i1;
    std::cout << integer1 << std::endl;
    integer1 += 99;
    std::cout << i1 << std::endl;

    return 0;
}