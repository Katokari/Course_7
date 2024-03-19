#pragma once

#include <iostream>
#include <cmath>
using namespace std;

namespace MyMath
{
    enum enOperationType { Add = 1, Subtract = 2, Multiply = 3, Divide = 4 };

    bool isOdd(int Num)
    {
        if (Num % 2)
            return true;
        return false;
    }

    int MaxOf2Numbers(int Num1, int Num2)
    {
        if (Num1 > Num2)
            return Num1;
        return Num2;
    }

    void Swap(int& Num1, int& Num2)
    {
        int Temp = Num1;

        Num1 = Num2;
        Num2 = Temp;
    }

    float CalculateRectangleArea(float Side1, float Side2)
    {
        return Side1 * Side2;
    }

    float RectangleAreaBySideAndDiagonal(float Side, float Diagonal)
    {
        float Area = Side * sqrt(pow(Diagonal, 2) - pow(Side, 2));
        return Area;
    }

    float TriangleArea(float Base, float Height)
    {
        float Area = (Base / 2) * Height;
        return Area;
    }

    float CircleArea(float Radious)
    {
        const float PI = 3.141592653589793238;
        float Area = pow(Radious, 2) * PI;
        return Area;
    }

    float CircleAreaByDiameter(float Diameter)
    {
        const float PI = 3.141592653589793238;
        float Area = (pow(Diameter, 2) * PI) / 4;
        return Area;
    }

    float CircleAreaInscribedInSquare(float SquareSide)
    {
        const float PI = 3.141592653589793238;
        float Area = (pow(SquareSide, 2) * PI) / 4;
        return Area;
    }

    float CircleAreaByCircumference(float Circumference)
    {
        const float PI = 3.141592653589793238;
        float Area = pow(Circumference, 2) / (4 * PI);
        return Area;
    }

    float CircleAreaByITriangle(float Side, float Base)
    {
        const float PI = 3.141592653589793238;
        float Area = PI * (pow(Base, 2) / 4) * ((2 * Side - Base) / (2 * Side + Base));
        return Area;
    }

    float CircleAreaByATriangle(float Side1, float Side2, float Side3)
    {
        const float PI = 3.141592653589793238;
        float P = (Side1 + Side2 + Side3) / 3;
        float T = (Side1 * Side2 * Side3) / (4 * sqrt(P * (P - Side1) * (P - Side2) * (P - Side3)));
        float Area = PI * pow(T, 2);
        return Area;
    }

    int Factorial(int N)
    {
        int F = 1;
        for (int i = N; N >= 1; i--)
        {
            F *= N;
        }
        return F;
    }

    float PowerOfM(int M, float Number)
    {
        if (M == 0)
            return 1;

        float P = 1;

        for (int i = M; i > 1; i--)
            P *= Number;
        return P;
    }

    float SimpleCalculator(float Number1, float Number2, enOperationType OpType)
    {
        switch (OpType)
        {
        case enOperationType::Add:
            return Number1 + Number2;
        case enOperationType::Subtract:
            return Number1 - Number2;
        case enOperationType::Multiply:
            return Number1 * Number2;
        case enOperationType::Divide:
            return Number1 / Number2;
        default:
            return -1;
        }
    }

    bool isPrime(int Number)
    {
        int M = round(Number / 2);

        for (int i = 2; i <= M; i++)
        {
            if (Number % i == 0)
                return false;
        }

        return true;
    }

    int SumOfDivisors(int Number)
    {
        int M = round(Number / 2);
        int Sum = 0;

        for (int i = 1; i <= M; i++)
        {
            if (Number % i == 0)
                Sum += i;
        }

        return Sum;
    }

    bool isPerfectNumber(int Number)
    {
        int Sum = SumOfDivisors(Number);
        if (Sum == Number)
            return true;
        return false;
    }

    int ReverseNumber(int Number)
    {
        int Reminder, Number2 = 0;
        while (Number > 0)
        {
            Reminder = Number % 10;
            Number /= 10;
            Number2 = Number2 * 10 + Reminder;
        }
        return Number2;
    }

    bool IsPalindromeNumber(int Number)
    {
        return (Number == ReverseNumber(Number));
    }

    float MyABS(float Number)
    {
        if (Number > 0)
            return Number;
        return Number * -1;
    }

    float GetFractionalPart(float Number)
    {
        return Number - int(Number);
    }

    int MyRound(float Number)
    {
        int IntPart = int(Number);
        int FractionsPart = GetFractionalPart(Number);
        if (abs(FractionsPart) >= .5)
        {
            if (Number > 0)
                return ++IntPart;
            else
                return --IntPart;
        }
        else
            return IntPart;
    }

    int MyFloor(float Number)
    {
        int IntPart = int(Number);
        if (IntPart > 0)
            return IntPart;
        else
            return --IntPart;
    }

    int MyCeil(float Number)
    {
        int IntPart = int(Number);
        float FractionsPart = GetFractionalPart(Number);
        if (abs(FractionsPart) > 0)
            if (Number > 0)
                return ++IntPart;
            else
                return IntPart;
        return IntPart;
    }

    int MySqrt(float Number)
    {
        return pow(Number, 0.5);
    }
}