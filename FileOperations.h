#pragma once

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

namespace File
{
    void LoadDataFromFileToVector(string FilePath, vector<string>& vFileContents)
    {
        fstream File;
        File.open(FilePath, ios::in);

        if (File.is_open())
        {
            string Line;

            while (getline(File, Line))
            {
                vFileContents.push_back(Line);
            }

            File.close();
        }

    }

    void SaveVectorToFile(string FilePath, vector<string>& vFileContents)
    {
        fstream File;
        File.open(FilePath, ios::out);

        if (File.is_open())
        {
            for (string& Line : vFileContents)
            {
                if (Line != "")
                    File << Line << endl;
            }

            File.close();
        }

    }

    void PrintFileContent(string FilePath)
    {
        fstream File;
        File.open(FilePath, ios::in);
        
        if (File.is_open())
        {
            string Line;
            while (getline(File, Line))
            {
                cout << Line << endl;
            }

            File.close();
        }
    }

    void DeleteRecordFromFile(string FilePath, string Record)
    {
        vector<string> vFileContents;
        LoadDataFromFileToVector(FilePath, vFileContents);

        for (string& Line : vFileContents)
            if (Line == Record)
                Line = "";

        SaveVectorToFile(FilePath, vFileContents);
    }

    void UpdateRecordinFile(string FilePath, string Record, string UpdateTo)
    {
        vector<string> vFileContents;
        LoadDataFromFileToVector(FilePath, vFileContents);

        for (string& Line : vFileContents)
            if (Line == Record)
                Line = UpdateTo;

        SaveVectorToFile(FilePath, vFileContents);
    }
}