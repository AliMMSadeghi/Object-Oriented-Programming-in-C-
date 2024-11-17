// How to assign private "array" members
#include<iostream>
#include<cstring>
//#include<conio.h>
using namespace std;
/////////////////////////////////////////////

class List
{
    private:
        int x[2];

    public:
        void Setprice (int [2]); // fcn prototype. "Setprice" fcn is defined outside of the class
        void Display() // "Display" fcn is defined inside of the class
            {
                for (int i=0; i<2; i++)
                    cout << x[i] << endl;
            }
};

void List::Setprice(int a[2])
{
    for (int j=0;j<2;j++)
        x[j]=a[j];
}

int main() 
{
    List L;
    int P[2]={1,2};

    L.Setprice(P);
    L.Display();
}

