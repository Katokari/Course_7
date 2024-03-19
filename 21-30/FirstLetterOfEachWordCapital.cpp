#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

string ConvertToCapitalOfEachFirstLetter(string String)
{
    bool isFirstLetter = true;

    for (int i = 0; i < String.length(); i++)
    {
        if (String[i] != ' ' && isFirstLetter)
            String[i] = toupper(String[i]);

        isFirstLetter = (String[i] == ' ') ? true : false;
    }

    return String;
}

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");
    cout << "\nString after conversation?\n";
    Text = ConvertToCapitalOfEachFirstLetter(Text);
    cout << Text << endl;

    return 0;
}