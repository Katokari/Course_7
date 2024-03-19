#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

void PrintAllVowels(string String)
{
    for (int i = 0; i < String.length(); i++)
    {
        if (MyInput::IsVowel(String[i]))
            cout << String[i] << "    ";
    }
}

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");

    cout << "\nVowels in string are: ";
    PrintAllVowels(Text);

    return 0;
}