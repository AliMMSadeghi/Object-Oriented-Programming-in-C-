#include<iostream>
#include<cstring>
//#include<conio.h>

using namespace std;

struct Employee
{
    private:
    int Ecode, Pay;

    public:

    Employee (int E, int P)
    {
        Ecode=E, Pay=P;
    }

    int getpay() 
    {
        return Pay;
    }
    int getcode() {return Ecode;}
};

int main()
{
    Employee E1 (1, 10000);
    Employee E2 (2, 20000);
    // cout << "The data for the employee E2 is " << endl;

   
    cout <<  E1.getcode() << endl;
    cout <<  E2.getpay() << endl;


}

