#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

int main()
{
    string Text = MyInput::ReadString("Please enter your string? \n");
    cout << "\nString Length = " << MyInput::CountLetters(Text);
    cout << "\nCapital Letters Count = " << MyInput::CountLetters(Text, MyInput::enWhatToCount::Capital);
    cout << "\nSmall Letters Count = " << MyInput::CountLetters(Text, MyInput::enWhatToCount::Small);

    return 0;
}