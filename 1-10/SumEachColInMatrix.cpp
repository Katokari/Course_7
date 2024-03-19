#include <iostream>
#include <cstdlib>
#include "MyArr.h"

using namespace std;

int ColSum(int arr[100][100], int rowsLength, int columnsLength)
{
    int Sum = 0;
    for (int i = 0; i < rowsLength; i++)
        Sum += arr[i][columnsLength];
    return Sum;
}

void PrintColumnSum(int arr[100][100], int rowsLength, int columnsLength)
{
    for (int i = 0; i < columnsLength; i++)
        cout << "Column " << i << " Sum = " << ColSum(arr, rowsLength, i) << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix[100][100];

    cout << "The following is 3x3 random matrix:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix, 5, 10, 1, 100);
    MyArr::PrintTwoDimensionalArray(matrix, 5, 10);

    cout << "The following is the sum of each column of the matrix:" << endl;
    PrintColumnSum(matrix, 5, 10);

    return 0;
}