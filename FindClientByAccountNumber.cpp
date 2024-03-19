#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include "MyInputsOutputs.h"

using namespace std;
string FILE_PATH = "Clients.txt";

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

vector<stClientData> ReadClientsFromFile(string FilePath)
{
    vector<stClientData> vClients;
    fstream File;
    File.open(FilePath, ios::in);

    if (File.is_open())
    {
        string Line;
        while (getline(File, Line))
        {
            vClients.push_back(ConvertLineToRecord(Line, "#//#"));
        }

        File.close();
    }

    return vClients;
}

void PrintClient(stClientData& Client)
{
    cout << "\nThe following is the extracted client record:\n" << endl;

    cout << "Account Number: " << Client.AccountNumber << endl;
    cout << "Pin Code      : " << Client.PinCode << endl;
    cout << "Name          : " << Client.Name << endl;
    cout << "Phone         : " << Client.PhoneNumber << endl;
    cout << "Account Balance: " << Client.AccountBalance << endl;
}

bool SearchClientByAccountNumber(stClientData& Client, string AccountNumber)
{
    vector<stClientData> Clients = ReadClientsFromFile(FILE_PATH);

    for (stClientData& C : Clients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
        
    }
    return false;
}

int main()
{
    stClientData Client;

    string AccountNumber = MyInput::ReadString("Please enter AccountNumber? ");

    if (SearchClientByAccountNumber(Client, AccountNumber))
        PrintClient(Client);
    else
        cout << "Client with Account Number (" << AccountNumber << ") Not Found!";

    system("pause");

    return 0;
}