#include <iostream>

// Passing by value, references, pointers and indirect pointers

int fDirNumDub(int passedNum)
{
    passedNum *= 2;
    return passedNum;
}

void fRefNumDub(int &passedNum)
{
    passedNum *= 2;
}

void fPointerNumDub(int *passedNum)
{
    *passedNum *= 2;
}

int main(int argc, char *argv[])
{

    // Here we pass the local dirInt variable as a value to the fDirNumBud which then doubles it
    // The function then returns the doubled value which we then set dirInt equal to
    // This is bulky and slow
    int dirInt = 10;
    dirInt = fDirNumDub(dirInt);
    std::cout << dirInt << std::endl;

    /// Changing it by reference - The function now takes a reference to the refInt variable
    // When we go ahead and manipulate the stored value using the reference of the variable
    // we also change the underlying variable from the main scope
    int refInt = 33;
    fRefNumDub(refInt);
    std::cout << refInt << std::endl; // 66

    /// Changing it by Pointer
    // Here we create a virable pPointerInt which is a pointer to the originally created pointerInt
    // We then go ahead and pass this memory address (pointer) to the function which accesses the
    // value stored in that memory space and doubles it.

    int pointerInt = 210;
    int *pPointerInt = &pointerInt;
    fPointerNumDub(pPointerInt);
    std::cout << pointerInt << std::endl;

    /// Changin it via indirect pointer

    int indirectPointerInt = 34;
    // We directly pass the pointer of the variable to the function requiring one less function
    // namely the assigning of the pointer as a seperate variable
    fPointerNumDub(&indirectPointerInt);
    std::cout << indirectPointerInt << std::endl;

    return 0;
}