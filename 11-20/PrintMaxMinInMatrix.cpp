#include <iostream>
#include <cstdlib>
#include "MyArr.h"

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

    cout << "Matrix1:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix1, 3, 1, 100);
    PrintTwoDimensionalArray(matrix1, 3, 3);

    cout << "Minimum Number is: " << MyArr::MinNumberInMatrix(matrix1, 3, 3) << endl;

    cout << "Max Number is: " << MyArr::MaxNumberInMatrix(matrix1, 3, 3) << endl;

    return 0;
}