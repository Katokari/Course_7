#include <iostream>
#include <cstdlib>
#include "MyArr.h"

using namespace std;

void PrintTwoDimensionalArray(int arr[100][100], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
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
    int productMatrix[100][100];

    cout << "Matrix1:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix1, 3, 1, 10);
    PrintTwoDimensionalArray(matrix1, 3);

    cout << "Matrix2:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix2, 3, 1, 10);
    PrintTwoDimensionalArray(matrix2, 3);

    cout << "Results:" << endl;
    MyArr::ProductTwoMatrices(matrix1, matrix2, productMatrix, 3, 3);
    PrintTwoDimensionalArray(productMatrix, 3);

    return 0;
}