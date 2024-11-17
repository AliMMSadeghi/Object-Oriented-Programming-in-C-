// Define function outside of class

#include<iostream>
#include<cstring>
//#include<conio.h>

using namespace std;

class M
{
public:
    void show(); // function prototype

};

void M::show() // function "show" related to the class "M"
{
    cout << "Welcome" << endl;
}

int main()
{
    M x;

    x.show();
}

