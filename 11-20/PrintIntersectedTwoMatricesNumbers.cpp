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

void PrintIntersectedElements(int matrix1[100][100], int matrix2[100][100], int rows, int cols)
{
    int Number = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Number = matrix1[i][j];
            if (MyArr::isNumberInMatrix(matrix2, Number, rows, cols))
                cout << setw(3) << Number << "\t";
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix1[100][100];
    int matrix2[100][100];

    cout << "Matrix1:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix1, 3, 1, 100);
    PrintTwoDimensionalArray(matrix1, 3, 3);

    cout << "Matrix1:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix2, 3, 1, 100);
    PrintTwoDimensionalArray(matrix2, 3, 3);

    cout << "Intersected Numbers are:" << endl;
    PrintIntersectedElements(matrix1, matrix2, 3, 3);

    return 0;
}