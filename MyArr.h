#pragma once

#include <iostream>
#include "MyInputsOutputs.h"
#include "MyMath.h"
#include <iomanip>
using namespace std;

namespace MyArr
{
    int SumOfMatrix(int matrix[100][100], int rows, int cols)
    {
        int Sum = 0;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                Sum += matrix[i][j];

        return Sum;
    }

    int NumberCountInMatrix(int matrix[100][100], int Number, int rows, int cols)
    {
        int Count = 0;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] == Number)
                    Count++;
            }

        return Count;
    }

    bool isSparceMatrix(int matrix[100][100], int rows, int cols)
    {
        return NumberCountInMatrix(matrix, 0, rows, cols) >= ((rows * cols)/2);
    }

    bool isNumberInMatrix(int matrix[100][100], int Number, int rows, int cols)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] == Number)
                    return true;
            }
        }
        return false;
    }

    bool areEqualMatrices(int matrix1[100][100], int matrix2[100][100], int rows, int cols)
    {
        return SumOfMatrix(matrix1, rows, cols) == SumOfMatrix(matrix2, rows, cols);
    }

    bool areTypicalMatrices(int matrix1[100][100], int matrix2[100][100], int rows, int cols)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix1[i][j] != matrix2[i][j])
                    return false;
            }
        }

        return true;
    }

    bool isIdentityMatrix(int matrix[100][100], int rows, int cols)
    {
        for (int i = 0; i < rows; i++)
        {
            if (matrix[i][i] != 1)
                return false;
            
            for (int j = 0; j < cols; j++)
            {
                if (i != j && matrix[i][j] != 0)
                    return false;
            }
        }

        return true;
    }

    bool isScalarMatrix(int matrix[100][100], int rows, int cols)
    {
        int FirstDiagElement = matrix[0][0];

        for (int i = 0; i < rows; i++)
        {
            if (matrix[i][i] != FirstDiagElement)
                return false;
            
            for (int j = 0; j < cols; j++)
            {
                if (i != j && matrix[i][j] != 0)
                    return false;
            }
        }

        return true;
    }

    int MaxNumberInMatrix(int matrix[100][100], int rows, int cols)
    {
        int Max = matrix[0][0];

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                Max = (matrix[i][j] > Max) ? matrix[i][j] : Max;

        return Max;
    }

    int MinNumberInMatrix(int matrix[100][100], int rows, int cols)
    {
        int Min = matrix[0][0];

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                Min = (matrix[i][j] < Min) ? matrix[i][j] : Min;

        return Min;
    }

    void ProductTwoMatrices(int matrix1[100][100], int matrix2[100][100], int Product[100][100], int rows, int cols)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                Product[i][j] = matrix1[i][j] * matrix2[i][j];
    }

    int MinNumberInArray(int arr[100], int arrLength)
    {
        int Min = arr[0];
        for (int i = 0; i < arrLength; i++)
        {
            if (arr[i] < Min)
                Min = arr[i];
        }
        return Min;
    }

    int SumArray(int arr[100], int arrLength)
    {
        int Sum = 0;
        for (int i = 0; i < arrLength; i++)
        {
            Sum += arr[i];
        }
        return Sum;
    }

    int MatrixRowSum(int matrix[100][100], int row, int cols)
    {
        int Sum = 0;
        for (int i = 0; i < cols; i++)
            Sum += matrix[row][i];

        return Sum;
    }

    int MatrixColSum(int matrix[100][100], int rows, int col)
    {
        int Sum = 0;
        for (int i = 0; i < rows; i++)
            Sum += matrix[i][col];

        return Sum;
    }

    int RandomNumber(int From, int To)
    {
        int randNum = rand() % (To - From + 1) + From;
        return randNum;
    }

    void PrintArray(int arr[100], int arrLength)
    {
        for (int i = 0; i < arrLength; i++)
            cout << setw(3) << arr[i] << " ";
        cout << "\n";
    }

    void PrintTwoDimensionalArray(int arr[100][100], int rowsLength, int columnsLength)
    {
        for (int i = 0; i < rowsLength; i++)
        {
            for (int j = 0; j < columnsLength; j++)
            {
                cout << setw(3) << arr[i][j] << "\t";
            }
            cout << endl;
        }
            
        cout << "\n";
    }

    void PrintTwoDimensionalArray(int arr[100][100], int length)
    {
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                cout << setw(3) << arr[i][j] << "\t";
            }
            cout << endl;
        }
            
        cout << "\n";
    }

    void FillArrayWithRandomNumbers(int arr[100], int arrLength, int From, int To)
    {
        for (int i = 0; i < arrLength; i++)
            arr[i] = RandomNumber(From, To);
    }

    void FillMatrixWithRandomNumbers(int arr[100][100], int rowsLength, int columnsLength, int From, int To)
    {
        for (int i = 0; i < rowsLength; i++)
            for (int j = 0; j < columnsLength; j++)
                arr[i][j] = RandomNumber(From, To);
    }

    void FillMatrixWithRandomNumbers(int arr[100][100], int length, int From, int To)
    {
        for (int i = 0; i < length; i++)
            for (int j = 0; j < length; j++)
                arr[i][j] = RandomNumber(From, To);
    }

    void FillArrayWithOrderedNumbers(int arr[100], int length)
    {
        for (int i = 0; i < length; i++)
            arr[i] = i + 1;
    }

    void FillMatrixWithOrderedNumbers(int arr[100][100], int rows, int cols)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                arr[i][j] = (i * 3) + j;
    }

    void FillMatrixWithOrderedNumbers(int arr[100][100], int length)
    {
        for (int i = 0; i < length; i++)
            for (int j = 0; j < length; j++)
                arr[i][j] = (i * 3) + j + 1;
    }

    void TransposeMatrix(int arr[100][100], int transpose[100][100], int rows, int cols)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                transpose[j][i] = arr[i][j]; 
    }

    void TransposeMatrix(int arr[100][100], int transpose[100][100], int length)
    {
        for (int i = 0; i < length; i++)
            for (int j = 0; j < length; j++)
                transpose[j][i] = arr[i][j]; 
    }

    int MaxNumberInArray(int arr[100], int arrLength)
    {
        int Max = 0;
        for (int i = 0; i < arrLength; i++)
        {
            if (arr[i] > Max)
                Max = arr[i];
        }
        return Max;
    }

    float ArrayAverage(int arr[100], int arrLength)
    {
        return (float)SumArray(arr, arrLength) / arrLength;
    }

    void SumOf2Arrays(int arr[100], int arr2[100], int arrSum[100], int arrLength)
    {
        for (int i = 0; i < arrLength; i++)
        {
            arrSum[i] = arr[i] + arr2[i];
        }
    }

    void ShuffleArray(int arr[100], int arrLength)
    {
        int Item1, Item2;
        for (int i = 0; i < arrLength; i++)
        {
            Item1 = RandomNumber(1, arrLength) - 1;
            Item2 = RandomNumber(1, arrLength) - 1;
            MyMath::Swap(arr[Item1], arr[Item2]);
        }
    }

    void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
    {
        for (int i = 0; i < arrLength; i++)
        {
            arrDestination[i] = arrSource[arrLength - i - 1];
        }
    }

    short FindNumberPositionInArray(int arr[100], int arrLength, int Number)
    {
        for (int i = 0; i < arrLength; i++)
            if (Number == arr[i])
                return i;
        return -1;
    }

    bool IsNumberInArray(int arr[100], int arrLength, int Number)
    {
        return FindNumberPositionInArray(arr, arrLength, Number) != -1;
    }

    void AddArrayElement(int arr[100], int& arrLength, int Number)
    {
        arr[arrLength] = Number;
        arrLength++;
    }

    void CopyArray(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length)
    {
        for (int i = 0; i < arrLength; i++)
            AddArrayElement(arrDestination, arr2Length, arrSource[i]);
    }

    void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length)
    {
        for (int i = 0; i < arrLength; i++)
            if (!IsNumberInArray(arrDestination, arr2Length, arrSource[i]))
                AddArrayElement(arrDestination, arr2Length, arrSource[i]);
    }

    bool IsPalindromeArray(int arr[100], int arrLength)
    {
        for (int i = 0; i < arrLength; i++)
            if (arr[i] != arr[arrLength - i - 1])
                return false;
        return true;
    }

    bool IsPalindromeMatrix(int matrix[100][100], int rows, int cols)
    {
        for (int i = 0; i < rows; i++)
        {
            if (!IsPalindromeArray(matrix[i], cols))
                return false;
        }

        return true;
    }
}