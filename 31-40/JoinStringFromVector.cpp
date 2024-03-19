#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

int main()
{
    vector<string> vString;
    string String[5] = {"Hello", "World", "This", "Is", "My"};
    string Text = MyInput::ReadString("Please enter your string? \n");

    vString = MyInput::SplitString(Text, " ");

    cout << "\nText after join vector:" << endl;
    
    Text = MyInput::JoinString(vString, " ");
    cout << Text << endl;

    cout << "\nText after join array:" << endl;
    
    Text = MyInput::JoinString(String, 5, " ");
    cout << Text << endl;

    return 0;
}