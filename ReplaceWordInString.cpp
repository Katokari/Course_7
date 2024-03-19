#include <iostream>
#include <string>
#include <vector>
#include "MyInputsOutputs.h"

using namespace std;

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");
    cout << "\nOriginal String\n" << Text << endl;

    cout << "\nString After Replace With Case Sensitive:\n";
    cout << MyInput::ReplaceWordsInString(Text, "jordan", "USA") << endl;

    cout << "\nString After Replace With Case Insensitive:\n";
    cout << MyInput::ReplaceWordsInString(Text, "jordan", "USA", MyInput::enMatchCase::CaseInsensitive) << endl;
    return 0;
}