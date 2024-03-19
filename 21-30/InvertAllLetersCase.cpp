#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

string InvertAllStringCase(string String)
{
    for (int i = 0; i < String.length(); i++)
    {
        String[i] = MyInput::InvertCharacterCase(String[i]);
    }

    return String;
}

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");
    cout << "\nString after inverting all letters case?\n";
    Text = InvertAllStringCase(Text);
    cout << Text << endl;

    return 0;
}