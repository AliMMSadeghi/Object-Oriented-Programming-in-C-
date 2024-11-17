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
    Time(int=0, int=0, int=0);
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

Time::Time(int hr, int min, int sec)
{
    setTime(hr, min, sec);
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
    
    Time t1;                // All arguments defaulted
    Time t2(2);             // minute and second defaulted
    Time t3(21,34);         // second defaulted
    Time t4(12,25,42);      // All values specified
    Time t5(27,74,49);      // All bad values specified

    cout << "Constructed with:\n\n" << "all default arguments:\n";
    t1.printUniversal(); 
    cout << "\n";
    t1.printStandard(); 

    cout << "\n\nhour specified; default minute and second:\n" ;
    t2.printUniversal(); 
    cout << "\n";
    t2.printStandard(); 

    cout << "\n\nhour and minute specified; default second:\n" ;
    t3.printUniversal(); 
    cout << "\n";
    t3.printStandard(); 

    cout << "\n\nhour, minute, and second specified:\n" ;
    t4.printUniversal(); 
    cout << "\n";
    t4.printStandard(); 

    cout << "\n\nall invalid values specified:\n" ;
    t5.printUniversal(); 
    cout << "\n";
    t5.printStandard(); 

}