#include <iostream>
#include <vector>
#include <string>
#include "MyInputsOutputs.h"

using namespace std;

void PrintFirstLetterOfEachWord(string String)
{
    bool isFirstLetter = true;

    cout << "\nFirst letters of this string:\n";

    for (int i = 0; i < String.length(); i++)
    {
        if (String[i] != ' ' && isFirstLetter)
            cout << String[i] << endl;

        isFirstLetter = (String[i] == ' ') ? true : false;
    }
}

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");
    PrintFirstLetterOfEachWord(Text);

    return 0;
}