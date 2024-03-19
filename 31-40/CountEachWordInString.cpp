#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

int CountEachWordInString(string String)
{
    string delim = " ";
    short pos = 0;
    short count = 0;

    while ((pos = String.find(delim)) != std::string::npos)
    {
        if (String.substr(0, pos) != "")
            count++;

        String.erase(0, pos + delim.length());
    }

    if (String != "")
        count++;

    return count;
}

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");

    cout << "\nThe number of words in your string is: " << CountEachWordInString(Text);

    return 0;
}