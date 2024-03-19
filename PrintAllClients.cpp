#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
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
    cout << "| " << left << setw(15) << Client.AccountNumber; 
    cout << "| " << left << setw(10) << Client.PinCode; 
    cout << "| " << left << setw(40) << Client.Name; 
    cout << "| " << left << setw(12) << Client.PhoneNumber; 
    cout << "| " << left << setw(12) << Client.AccountBalance; 
}

void PrintAllClients(vector<stClientData>& vClients)
{
    printf("%*cClient List (%d) Client(s).\n", 40, ' ', vClients.size());
    cout << "________________________________________________________________________________________________\n" << endl;

    cout << "| " << left << setw(15) << "Accout Number"; 
    cout << "| " << left << setw(10) << "Pin Code"; 
    cout << "| " << left << setw(40) << "Client Name"; 
    cout << "| " << left << setw(12) << "Phone"; 
    cout << "| " << left << setw(12) << "Balance"; 

    cout << "\n________________________________________________________________________________________________\n" << endl;

    for (stClientData& Client : vClients)
    {
        PrintClient(Client);
        cout << endl;
    }

    cout << "\n________________________________________________________________________________________________\n";
}

int main()
{
    vector<stClientData> vClients = ReadClientsFromFile("Clients.txt");
    PrintAllClients(vClients);

    system("pause>0");

    return 0;
}