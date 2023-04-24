#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t t = time(0);
    tm * Now = localtime(&t);
    cout << "Year   : " << Now->tm_year + 1900 << endl;
    cout << "Mounth : " << Now->tm_mon + 1 << endl;
    cout << "Day    : " << Now->tm_mday << endl;
    cout << "Hour   : " << Now->tm_hour << endl;
    cout << "Min    : " << Now->tm_min  << endl;
    cout << "Second : " << Now->tm_sec << endl;
    cout << "Week Day (Days since sunday)  : " << Now->tm_wday << endl;
    cout << "Year Day (Days since Jan 1st) : " << Now->tm_yday << endl;
    cout << "Hour of Daylight saving time  : " << Now->tm_isdst<< endl;
    
    return 0;
}