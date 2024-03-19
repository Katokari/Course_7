#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "MyInputsOutputs.h"

using namespace std;

bool IsVowel(char chr)
{
    chr = tolower(chr);

    return ((chr == 'a') || (chr == 'e') || (chr == 'i') || (chr == 'u') || (chr == 'o'));
}

int main()
{
    char chr = MyInput::ReadChar("\nPlease enter a character? \n");

    if (IsVowel(chr))
        cout << "Yes Letter '" << chr << "' is vowel";
    else
        cout << "No Letter '" << chr << "' is NOT vowel";
    
    return 0;
}