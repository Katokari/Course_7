#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

void PrintEachWordInString(string String)
{
    string delim = " ";
    short pos = 0;
    string sWord;

    while ((pos = String.find(delim)) != std::string::npos)
    {
        sWord = String.substr(0, pos);

        if (sWord != "")
            cout << sWord << endl;

        String.erase(0, pos + delim.length());
    }

    if (String != "")
        cout << String << endl;
}

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");

    cout << "\nYour string words are: \n\n";
    PrintEachWordInString(Text);

    return 0;
}