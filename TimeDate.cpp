#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t t = time(0); // get time Now
    char * dt = ctime(&t); // covert in string from
    cout << "Local data and time is : " << dt << endl;

    tm * gmtm = gmtime(&t); // conver now to tm struct for UTC data/time
    dt = asctime(gmtm);
    cout << "UTC data and Time is : " << dt << endl;

    return 0;
}