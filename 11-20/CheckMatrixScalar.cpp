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
    int matrix1[100][100] = { {5, 0, 0}, {0, 5, 0}, {0, 0, 4} };

    cout << "Matrix1:" << endl;
    PrintTwoDimensionalArray(matrix1, 3, 3);

    if (MyArr::isScalarMatrix(matrix1, 3, 3))
        cout << "Yes: Matrix is Scalar" << endl;
    else
        cout << "No: Matrix is NOT Scalar" << endl;

    return 0;
}