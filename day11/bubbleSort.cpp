#include <iostream>

struct nameAndSalary
{
    std::string name;
    double salary;
};

void printOut(nameAndSalary *pIn, int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout << pIn->name << pIn->salary << std::endl;
        pIn++;
    }
}

void sortFAB4(nameAndSalary *pIn, int sizeOfArray)
// Here we implement a simple bubble sort loop to sort our array by salary in ascending order
{
    bool swapped;
    for (int i = 0; i < sizeOfArray - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < sizeOfArray - i - 1; j++)
        {
            if (pIn[j].salary > pIn[j + 1].salary)
            {
                // Swap the elements
                nameAndSalary temp = pIn[j];
                pIn[j] = pIn[j + 1];
                pIn[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (!swapped)
            break;
    }
}

int main(int argc, const char *argv[])
{

    nameAndSalary fAB[4] = {
        {"John", 79000},
        {"Paul", 129000},
        {"Sam", 99000},
        {"Liz", 89000}};

    std::cout << "Before Processing" << std::endl;

    printOut(fAB, 4);

    // Sorting Operation

    sortFAB4(fAB, 4);

    std::cout << std::endl;

    std::cout << "After Processing" << std::endl;

    printOut(fAB, 4);

    return 0;
}