#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

string ToLowerString(string String)
{
    for (int i = 0; i < String.length(); i++)
    {
        String[i] = tolower(String[i]);
    }

    return String;
}

string ToUpperString(string String)
{
    for (int i = 0; i < String.length(); i++)
    {
        String[i] = toupper(String[i]);
    }

    return String;
}


int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");
    cout << "\nString after Upper?\n";
    Text = ToUpperString(Text);
    cout << Text << endl;

    cout << "\nString after Lower?\n";
    Text = ToLowerString(Text);
    cout << Text << endl;

    return 0;
}