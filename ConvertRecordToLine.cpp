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

string ConvertRecordToLine(stClientData ClientData, string Delim)
{
    string S1 = ClientData.AccountNumber + Delim
              + ClientData.PinCode + Delim
              + ClientData.Name + Delim
              + ClientData.PhoneNumber + Delim
              + to_string(ClientData.AccountBalance);
    return S1;
}

stClientData ReadNewClient()
{
    stClientData ClientData;

    ClientData.AccountNumber = MyInput::ReadString("Enter Account Number? ");
    ClientData.PinCode       = MyInput::ReadString("Enter PinCode? ");
    ClientData.Name          = MyInput::ReadString("Enter Name? ");
    ClientData.PhoneNumber   = MyInput::ReadString("Enter Phone Number? ");
    ClientData.AccountBalance = MyInput::ReadPositiveNumber("Enter AccountBalance? ", "Wrong Input, Please try Again? ");

    return ClientData;
}

int main()
{
    stClientData ClientData;

    cout << "Please Enter Client Data:\n" << endl;
    ClientData = ReadNewClient();

    cout << "\n\n\n" << "Client Record for Saving is:" << endl;
    cout << ConvertRecordToLine(ClientData, "#//#");

    return 0;
}