#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void saveVectorToFile(string FilePath, vector<string> &vFileContent)
{
    fstream MyFile;

    MyFile.open(FilePath, ios::out);

    if (MyFile.is_open())
    {
        for (string & Line : vFileContent)
        {
            if (Line != "")
            {
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
}
int main()
{

    vector<string> vFileContent{"Hassan", "Ali", "Mohamed", "Ali"};

    saveVectorToFile("MyFile.txt", vFileContent);

    return 0;
}