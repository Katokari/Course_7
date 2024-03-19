#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

string TrimLeft(string String)
{
    for (short i = 0; i < String.length(); i++)
        if (String[i] != ' ')
            return String.substr(i, String.length() - i);

    return "";
}

string TrimRight(string String)
{
    for (short i = String.length() - 1; i >= 0; i--)
        if (String[i] != ' ')
            return String.substr(0, String.length() - i);

    return "";
}

string Trim(string String)
{
    return TrimLeft(TrimRight(String));
}

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");

    cout << "String      = " << Text << endl;
    cout << "Trim Left   = " << TrimLeft(Text) << endl;
    cout << "Trim Right  = " << TrimRight(Text) << endl;
    cout << "Trim        = " << Trim(Text) << endl;

    system("pause>0");

    return 0;
}