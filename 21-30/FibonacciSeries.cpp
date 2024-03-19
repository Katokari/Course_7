#include <iostream>
#include <vector>
#include "MyInputsOutputs.h"

using namespace std;

void GenerateFibonacciSeries(int Number)
{
    int FiboNumber = 0;
    int FirstPrevious = 1;
    int SecondPrevious = 0;

    for (int i = 0; i < Number; i++)
    {
        FiboNumber = FirstPrevious + SecondPrevious;
        SecondPrevious = FirstPrevious;
        FirstPrevious = FiboNumber;

        cout << FiboNumber << " ";
    }
}

void PrintVectorNumbers(vector<int>& vNumbers)
{
    for (int& Number : vNumbers)
        cout << Number << " ";
}

int main()
{
    int Number = MyInput::ReadPositiveNumber("How many fibonacci series numbers? ", "Wrong input, try again? ");
    
    GenerateFibonacciSeries(Number);

    return 0;
}