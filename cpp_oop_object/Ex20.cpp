// Date class
#include<iostream>
#include<cstring>
//#include<conio.h>
using namespace std;
/////////////////////////////////////////////
class Date
{
    private:
        int month;
        int day;
        int year;
    public:
        Date(int =1, int = 1, int = 2000);
        void print();
};

Date::Date(int m, int d, int y)
{
    month = m, day = d, year =y;
}

// Print the date in the format mm-dd-yyyy
void Date::print()
{
    cout << month << "-" << day << "-" << year << "\n";
}

int main()
{
    Date date1(1,5,2024);
    Date date2;

    date1.print();
    date2.print();

    date2 = date1;

    date2.print();

}