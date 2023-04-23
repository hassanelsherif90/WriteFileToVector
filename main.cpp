#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void SaveToFile(string Path, vector<string> &vFileContent)
{
    fstream MyFile;
    MyFile.open(Path, ios::out); // To Write

    if (MyFile.is_open())
    {
        for (string &Line : vFileContent)
        {
            if (Line != "")
                {
                    MyFile << Line << endl;
                }
        }
        MyFile.close();
    }
}

void LoadFileToVector(string Path, vector<string> &vFileContent)
{
    fstream MyFile;

    MyFile.open(Path, ios::in); // To Read

    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}

void PrintFile(string Path)
{
    fstream MyFile;

    MyFile.open(Path, ios::in); // To Read

    string Line;

    if (MyFile.is_open())
    {
        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }
        MyFile.close();
    }
}

void DeletRecord(string Path, string Name)
{
    vector<string> vFileContent;

    LoadFileToVector(Path, vFileContent);
    for (string &Line : vFileContent)
    {
        if (Name == Line)
        {
            Line = "";
        }
    }
    SaveToFile(Path, vFileContent);
}

int main()
{
    cout << "Before Delet Record \n";
    PrintFile("MyFile.txt");

    DeletRecord("MyFile.txt", "Ali");

    cout << "\n\nAfter Delet Record \n";
    PrintFile("MyFile.txt");

    int i;
    cin >> i;

    return 0;
}