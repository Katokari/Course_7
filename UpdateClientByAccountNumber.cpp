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
    bool MarkForDeletion = false;
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

string ConvertRecordToLine(stClientData& ClientData, string Delim)
{
    string S1 = ClientData.AccountNumber + Delim
              + ClientData.PinCode + Delim
              + ClientData.Name + Delim
              + ClientData.PhoneNumber + Delim
              + to_string(ClientData.AccountBalance);
    return S1;
}

void SaveClientsToFile(vector<stClientData>& vClients, string FilePath)
{
    fstream File;
    File.open(FilePath, ios::out);
    string Line;

    if (File.is_open())
    {
        for (stClientData& Client : vClients)
        {
            if (Client.MarkForDeletion == false)
            {
                Line = ConvertRecordToLine(Client, "#//#");
                File << Line << endl;
            }
        }

        File.close();
    }
}

bool SearchClientByAccountNumber(vector<stClientData> vClients, string AccountNumber, stClientData& Client)
{
    for (stClientData& C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
        
    }
    return false;
}

bool MarkClientForDeletionByAccountNumber(vector<stClientData>& vClients, string AccountNumber)
{
    for (stClientData& Client : vClients)
    {
        if (Client.AccountNumber == AccountNumber)
        {
            Client.MarkForDeletion = true;
            return true;
        }   
    }
    return false;
}

stClientData UpdateClient(string AccountNumber)
{
    stClientData Client;

    Client.AccountNumber = AccountNumber;
    Client.PinCode       = MyInput::ReadString("Enter PinCode? ");
    Client.Name          = MyInput::ReadString("Enter Name? ");
    Client.PhoneNumber   = MyInput::ReadString("Enter Phone Number? ");
    Client.AccountBalance = MyInput::ReadPositiveNumber("Enter AccountBalance? ", "Wrong Input, Please try Again? ");

    return Client;
}

bool UpdateClientByAccountNumber(vector<stClientData>& vClients, string AccountNumber)
{
    stClientData Client;
    char Answer = 'n';

    if (SearchClientByAccountNumber(vClients, AccountNumber, Client))
    {
        PrintClient(Client);

        cout << "\n\nAre you sure you want update this client? y/n ? "; 
        cin >> Answer;
        
        if (Answer == 'y' || Answer == 'Y')
        {
            for (stClientData& C : vClients)
            {
                if (C.AccountNumber == Client.AccountNumber)
                {
                    C = UpdateClient(C.AccountNumber);
                    break;
                }
            }
            
            SaveClientsToFile(vClients, "Clients.txt");

            cout << "\n\nClient Updated Successfully.";

            return true;
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }
}


int main()
{
    vector <stClientData> vClients = ReadClientsFromFile("Clients.txt"); 
    string AccountNumber = MyInput::ReadString("Please enter AccountNumber? ");

    UpdateClientByAccountNumber(vClients, AccountNumber);

    system("pause");

    return 0;
}