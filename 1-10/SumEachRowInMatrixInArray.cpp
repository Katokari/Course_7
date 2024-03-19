#include <iostream>
#include <cstdlib>
#include "MyArr.h"

using namespace std;

void SumRowsArray(int matrix[100][100], int Arr[100], int rowsLength, int columnsLength)
{
    for (int i = 0; i < rowsLength; i++)
        Arr[i] = MyArr::SumArray(matrix[i], columnsLength);
}

void PrintRowSumsArray(int Arr[100], int rowsLength)
{
    for (int i = 0; i < rowsLength; i++)
        cout << "Row " << i << " Sum = " << Arr[i] << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix[100][100];
    int arr[100];

    cout << "The following is 3x3 random matrix:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix, 5, 10, 1, 100);
    MyArr::PrintTwoDimensionalArray(matrix, 5, 10);

    cout << "The following is the sum of each row of the matrix:" << endl;
    SumRowsArray(matrix, arr, 5, 10);
    PrintRowSumsArray(arr, 5);

    return 0;
}