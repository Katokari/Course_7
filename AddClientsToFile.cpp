#include <iostream>
#include <string>
#include <vector>
#include <fstream>
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

void SaveClientToFile(string Record, string FilePath)
{
    fstream File;
    File.open(FilePath, ios::out | ios::app);

    if (File.is_open())
    {
        File << Record << endl;

        File.close();
    }
}

void AddNewClient()
{
    stClientData ClientData;

    cout << "Adding New Client:\n" << endl;
    ClientData = ReadNewClient();

    SaveClientToFile(ConvertRecordToLine(ClientData, "#//#"), "Clients.txt");
    cout << "\nClient Added Successfully, do you want to add more clients? ";
}

void ReadNewClients()
{
    char Again;

    do
    {
        system("CLS");
        AddNewClient();
        cin >> Again;

    } while (tolower(Again) == 'y');
}

int main()
{
    ReadNewClients();

    return 0;
}