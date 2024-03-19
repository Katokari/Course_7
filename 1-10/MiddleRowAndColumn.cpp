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

void PrintMatrixMiddleRow(int arr[100][100], int rows, int cols)
{
    int middleRow = rows / 2;
    for (int i = 0; i < cols; i++)
        printf(" %0*d\t", 2, arr[middleRow][i]);

    cout << "\n";
}

void PrintMatrixMiddleCol(int arr[100][100], int rows, int cols)
{
    int middleCol = cols / 2;
    for (int i = 0; i < rows; i++)
        printf(" %0*d\t", 2, arr[i][middleCol]);

    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix1[100][100];

    cout << "Matrix1:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix1, 5, 7, 1, 10);
    PrintTwoDimensionalArray(matrix1, 5, 7);

    cout << "Middle Row of Matrix1 is:" << endl;
    PrintMatrixMiddleRow(matrix1, 5, 7);

    cout << "Middle Column of Matrix1 is:" << endl;
    PrintMatrixMiddleCol(matrix1, 5, 7);

    return 0;
}