#include <iostream>

int main()
{

    int n1, n2;
    char op;

    std::cout << "Please enter which operation you would like to perform: +,-,*,/,%" << std::endl;
    std::cin >> op;

    std::cout << "Please enter the first number: " << std::endl;
    std::cin >> n1;

    std::cout << "Please enter the second number: " << std::endl;
    std::cin >> n2;

    switch (op)
    {

    case '+':
        std::cout << n1 + n2 << std::endl;
        break;
    case '-':
        std::cout << n1 - n2 << std::endl;
        break;
    case '/':
        std::cout << n1 / n2 << std::endl;
        break;
    case '*':
        std::cout << n1 * n2 << std::endl;
        break;
    case '%':
        std::cout << n1 % n2 << std::endl;
        break;

    default:
        std::cout << "Invalid operator" << std::endl;
    }

    return 0;
}