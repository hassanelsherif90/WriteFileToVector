#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void LoadFileToVector(string Path, vector<string> &vFileContent)
{
    fstream MyFile;

    MyFile.open(Path, ios::in);

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

int main()
{
    vector<string> vFileContent;
    LoadFileToVector("MyFile.txt", vFileContent);

    for (string & Line : vFileContent)
    {
        cout << Line << endl;
    }

    return 0;
}