#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t t = time(0);
    tm * Now = localtime(&t);
    cout << "Year : " << Now->tm_year + 1900 << endl;
    
    int i;
    cin >> i;
    return 0;
}