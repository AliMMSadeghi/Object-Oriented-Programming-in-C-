// Constructor 
#include<iostream>
#include<cstring>
//#include<conio.h>
using namespace std;
/////////////////////////////////////////////

class Cubicle
{

    private:
        int x, y, z;

    public:
        Cubicle(int a, int b, int c)
        {
           x=a, y=b, z=c;
            cout << "Constructor is called" << endl;
        } 

        int volume()
         {return (x*y*z);}
};

int main()
{
    Cubicle c1(1,2,3);
    Cubicle c2(4,5,6);

    cout << "Volume of cube1 = " << c1.volume() << endl;
    cout << "Volume of cube2 = " << c2.volume() << endl;
}