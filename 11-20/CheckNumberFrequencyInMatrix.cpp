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

    Number = MyInput::ReadNumberInRange("Enter the number to count in matrix? ", "\nWrong input, please try again? ", 1, 10);

    cout << "\nNumber " << Number << " count in matrix is " << MyArr::NumberCountInMatrix(matrix1, Number, 3, 3) << endl;

    return 0;
}