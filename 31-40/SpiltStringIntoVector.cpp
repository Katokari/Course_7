#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

void PrintItemsInVector(vector<string>& String)
{
    for (string& Token : String)
        cout << Token << endl;
}

int main()
{
    vector<string> String;
    string Text = MyInput::ReadString("Please enter your string? \n");

    String = MyInput::SplitString(Text, " ");

    cout << "Tokens = " << String.size() << endl;
    PrintItemsInVector(String);

    return 0;
}