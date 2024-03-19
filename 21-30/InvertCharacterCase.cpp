#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

char InvertCharacterCase(char chr)
{
    return (isupper(chr)) ? tolower(chr) : toupper(chr); 
}

int main()
{
    char chr = MyInput::ReadChar("Please enter a character? \n");
    cout << "\nCharacter after inverting case?\n";
    chr = InvertCharacterCase(chr);
    cout << chr << endl;

    return 0;
}