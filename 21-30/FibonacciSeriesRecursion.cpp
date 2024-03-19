#include <iostream>
#include <vector>
#include "MyInputsOutputs.h"

using namespace std;

void GenerateFibonacciRecursion(int Number, int FirstPrevious, int SecondPrevious)
{
    int FiboNumber = 0;

    if (Number > 0)
    {
        FiboNumber = FirstPrevious + SecondPrevious;
        cout << FiboNumber << " ";
        GenerateFibonacciRecursion(--Number, FiboNumber, FirstPrevious);
    }
}

int main()
{
    int Number = MyInput::ReadPositiveNumber("How many fibonacci series numbers? ", "Wrong input, try again? ");
    
    GenerateFibonacciRecursion(Number, 0, 1);

    return 0;
}