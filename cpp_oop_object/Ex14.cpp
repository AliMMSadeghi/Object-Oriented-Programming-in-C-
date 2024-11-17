// Different constructor type 
#include<iostream>
#include<cstring>
//#include<conio.h>
using namespace std;
/////////////////////////////////////////////

class Cubicle
{
    private:
        int x,y,z;
    public:
        Cubicle()                        // default constructor
        {
            x=3, y=4, z=2;
            cout << "\nDefault constructor is called. \n";
        }

        ~ Cubicle() 
        {
            cout << "\nDestructor is called to remove object. \n"<< endl;
        }

        Cubicle(int a, int b, int c)    // parametric constructor
        {
            x=a, y=b, z=c;
            cout << "\nParametric constructor is called." << endl;
        }

        Cubicle( Cubicle &m)           // copy constructor
        {
            x=m.x, y=m.y, z=m.z;
            cout << "\nCopy constructor is called." << endl;
        }

        int volume()
        {return(x*y*z);}
};


int main()
{
    {
    Cubicle c1;                 // scope: block{}
    cout << "Volume of cube1 = " << c1.volume() << "\n";
    }

    Cubicle c2(6,5,4);          // scope: main()
    cout << "Volume of cube2 = " << c2.volume();

    {
    Cubicle c3(c2);             // scope: block{}
    cout << "Volume of cube3 = " << c3.volume() << "\n";
    }

// return 0;
}