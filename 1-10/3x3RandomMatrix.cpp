#include <iostream>
#include <cstdlib>
#include "MyArr.h"

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int matrix[100][100];

    cout << "The following is 3x3 random matrix:" << endl;

    MyArr::FillMatrixWithRandomNumbers(matrix, 3, 1, 100);
    MyArr::PrintTwoDimensionalArray(matrix, 3);

    return 0;
}