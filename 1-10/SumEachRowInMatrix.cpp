#include <iostream>
#include <cstdlib>
#include "MyArr.h"

using namespace std;

void PrintEachRowSumInMatrix(int matrix[100][100], int rowsLength, int columnsLength)
{
    for (int i = 0; i < rowsLength; i++)
        cout << "Row " << i << " Sum = " << MyArr::SumArray(matrix[i], columnsLength) << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix[100][100];

    cout << "The following is 3x3 random matrix:" << endl;
    MyArr::FillMatrixWithRandomNumbers(matrix, 5, 10, 1, 100);
    MyArr::PrintTwoDimensionalArray(matrix, 5, 10);

    cout << "The following is the sum of each row of the matrix:" << endl;
    PrintEachRowSumInMatrix(matrix, 5, 10);

    return 0;
}