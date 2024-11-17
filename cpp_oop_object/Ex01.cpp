#include<iostream>
#include<cstring>
//#include<conio.h>

using namespace std;

struct Employee
{
    char Name [30];
    int Age;
    int Pay;
};

int main()
{
    Employee E1 ={"Ali", 30, 20000};
    Employee E2 = {"Sara", 25, 30000};
    // cout << "The data for the employee E2 is " << endl;

    E2 = E1;
    
    cout << "Name: " << E2.Name << endl;
    cout << "Age: " << E2.Age << endl;
    cout << "Pay: " << E2.Pay << endl;


}

