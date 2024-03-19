#include <iostream>
#include <string>
#include <vector>
#include "MyInputsOutputs.h"

using namespace std;

struct stClientData
{
    string AccountNumber;
    string PinCode;
    string Name;
    string PhoneNumber;
    double AccountBalance;
};

stClientData ConvertLineToRecord(string S1, string Delim)
{
    stClientData ClientData;
    vector<string> LineRecord = MyInput::SplitString(S1, Delim);

    ClientData.AccountNumber = LineRecord.at(0);
    ClientData.PinCode = LineRecord.at(1);
    ClientData.Name = LineRecord.at(2);
    ClientData.PhoneNumber = LineRecord.at(3);
    ClientData.AccountBalance = stod(LineRecord.at(4));

    return ClientData;
}

int main()
{
    stClientData ClientData;
    string Line = "A3894#//#2345#//#Kato Chan#//#0949137038#//#5000.000000";

    cout << "Line Record is:\n" << Line << endl;
    cout << "\nThe following is the extracted client record:\n" << endl;

    ClientData = ConvertLineToRecord(Line, "#//#");

    cout << "Account Number: " << ClientData.AccountNumber << endl;
    cout << "Pin Code      : " << ClientData.PinCode << endl;
    cout << "Name          : " << ClientData.Name << endl;
    cout << "Phone         : " << ClientData.PhoneNumber << endl;
    cout << "Account Balance: " << ClientData.AccountBalance << endl;

    return 0;
}