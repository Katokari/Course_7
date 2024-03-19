#include <iostream>
#include <cstdlib>
#include "MyArr.h"

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int matrix[100][100];

    cout << "The following is 3x3 ordered matrix:" << endl;

    MyArr::FillMatrixWithOrderedNumbers(matrix, 3);
    MyArr::PrintTwoDimensionalArray(matrix, 3);

    return 0;
}