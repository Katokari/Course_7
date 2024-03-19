#include <iostream>
#include <cstdlib>
#include "MyArr.h"
#include "MyInputsOutputs.h"

using namespace std;

void PrintTwoDimensionalArray(int arr[100][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %0*d\t", 2, arr[i][j]);
        }
        cout << endl;
    }
        
    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix1[100][100];
    int Number;

    cout << "Matrix1:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix1, 3, 1, 10);
    PrintTwoDimensionalArray(matrix1, 3, 3);

    Number = MyInput::ReadNumberInRange("Enter the number to look for in matrix? ", "\nWrong input, please try again? ", 1, 10);

    if (MyArr::isNumberInMatrix(matrix1, Number, 3, 3))
        cout << "Yes it is there" << endl;
    else
        cout << "No it is NOT there" << endl;

    return 0;
}