#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");

    cout << "\nNumber of vowels is: " << MyInput::CountLetters(Text, MyInput::enWhatToCount::Vowel);

    return 0;
}