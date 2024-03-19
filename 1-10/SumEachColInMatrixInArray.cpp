#include <iostream>
#include <cstdlib>
#include "MyArr.h"

using namespace std;

void ColSumInArr(int arr[100][100], int sumArr[100], int rowsLength, int columnsLength)
{
    for (int i = 0; i < columnsLength; i++)
        sumArr[i] = MyArr::MatrixColSum(arr, rowsLength, i);
}

void PrintColumnSum(int sumArr[100], int Length)
{
    for (int i = 0; i < Length; i++)
        cout << "Column " << i << " Sum = " << sumArr[i] << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix[100][100];
    int sumArr[100];

    cout << "The following is 3x3 random matrix:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix, 5, 10, 1, 100);
    MyArr::PrintTwoDimensionalArray(matrix, 5, 10);

    cout << "The following is the sum of each column of the matrix:" << endl;
    ColSumInArr(matrix, sumArr, 5, 10);
    PrintColumnSum(sumArr, 10);

    return 0;
}