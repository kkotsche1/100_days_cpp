#include <iostream>

int main()
{

    // Casting string to intger
    std::string sample_string = "1234";
    int i = stoi(sample_string);

    std::cout << i + 100 << std::endl;

    // Typecasting a float to an integer
    float f = 10.78;
    int i_ = f;

    std::cout << i_ << std::endl;

    return 0;
}