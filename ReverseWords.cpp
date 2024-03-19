#include <iostream>
#include <string>
#include <vector>
#include "MyInputsOutputs.h"

using namespace std;

string ReverseString(string S1)
{
    vector<string> vString = MyInput::SplitString(S1, " ");
    vector<string>::iterator iter;
    S1 = "";

    for (iter = vString.end() - 1; iter != vString.begin() - 1; iter--)
        S1 = S1 + *iter + " ";

    return S1.substr(0, S1.length() - 1);
}

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");
    cout << endl << ReverseString(Text) << endl;

    return 0;
}