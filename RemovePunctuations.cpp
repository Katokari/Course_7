#include <iostream>
#include <string>
#include <vector>
#include "MyInputsOutputs.h"

using namespace std;

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");
    cout << "\nOriginal String\n" << Text << endl;

    cout << "\nPunctuations Removed:\n";
    cout << MyInput::RemovePunctuationsFromString(Text) << endl;

    return 0;
}