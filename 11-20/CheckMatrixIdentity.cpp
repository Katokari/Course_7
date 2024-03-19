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
    int matrix1[100][100] = { {1, 0, 0}, {0, 1, 0}, {1, 0, 1} };

    cout << "Matrix1:" << endl;
    PrintTwoDimensionalArray(matrix1, 3, 3);

    if (MyArr::isIdentityMatrix(matrix1, 3, 3))
        cout << "Yes: Matrix is Identity" << endl;
    else
        cout << "No: Matrix is NOT Identity" << endl;

    return 0;
}