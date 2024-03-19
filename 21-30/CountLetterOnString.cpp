#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");
    char chr = MyInput::ReadChar("\nPlease enter a character? \n");

    cout << "\nLetter '" << chr << "' Count = " << MyInput::CountLetter(Text, chr);

    return 0;
}