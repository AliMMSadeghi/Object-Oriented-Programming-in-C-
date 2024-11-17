//  
#include<iostream>
#include<iomanip>

using namespace std;
using std::cout;
using std::setfill;
using std::setw;
/////////////////////////////////////////////

class Time 
{
    public:
        Time();
        void setTime(int, int, int);
        void printUniversal();
        void printStandard();

    private:
        int hour; // 0-23 (24 hr clock format)
        int minute; // 0-59
        int second; // 0-59

};

// Time constructor initializes each data member to zero.
// Ensures all Time objects start in a consistent state.

Time::Time()
{
    hour = minute = second = 0;
}

// Set new time value using universal time.
// Perform validity checks on the data values. Set invalid values to zero
void Time::setTime(int h, int m, int s)
{
    hour   = (h>=0 && h<24) ? h : 0;
    minute = (m>=0 && m<60) ? m : 0;
    second = (s>=0 && s<60) ? s : 0;
}

// print time in Universal format
void Time::printUniversal()
{
    cout << setfill('0') << setw(2) << hour << ":"
         << setw(2) << minute << ":"
         << setw(2) << second << "\n";
}


// print time in Standard format

void Time::printStandard()
{
    cout << ((hour==0 || hour==12) ? 12 : hour % 12)
    << ":" << setfill('0') << setw(2) << minute << ":" 
    << setw(2) << second << (hour<12 ? "AM" : "PM") << "\n";
}

//////////////////////////////////////////////////////
int main()
{
    Time t;
    cout << "\nThe initial Universal time is ";
    t.printUniversal(); // 00:00:00
    cout << "\nThe initial Standard time is ";
    t.printStandard(); // 12:00:00 AM

    t.setTime(13,27,6); // change time

    cout << "\nThe Universal time after setTime is ";
    t.printUniversal();
    cout << "\nThe Stabndard time after setTime is ";
    t.printStandard(); 

    t.setTime(99,99,99);

    cout << "\n\nAfter attempting invalid settings: " << "\nUniversal time:";
    t.printUniversal(); // 00:00:00
    cout << "\nStabndard time after attempting invalid settings ";
    t.printStandard(); // 00:00:00

}