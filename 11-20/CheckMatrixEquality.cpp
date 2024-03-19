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
    int matrix2[100][100];

    cout << "Matrix1:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix1, 3, 1, 10);
    PrintTwoDimensionalArray(matrix1, 3, 3);

    cout << "Matrix2:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix2, 3, 1, 10);
    PrintTwoDimensionalArray(matrix2, 3, 3);

    if (MyArr::areEqualMatrices(matrix1, matrix2, 3, 3))
        cout << "Yes: matrices are equal" << endl;
    else
        cout << "No: matrices are NOT equal" << endl;
        



    return 0;
}