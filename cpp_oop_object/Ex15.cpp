
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
            cout << "\nDefault constructor is called. \n";
            x=3, y=4, z=2;
        }

        ~ Cubicle() 
        
            {cout << "\nDestructor is called to remove object. \n"<< endl;}
        

        Cubicle (int a)    // one-parameter constructor
        {
            x=a, y=2, z=3;
            cout << "\nParametric constructor is called." << endl;
        }

        Cubicle (int m, int k)    // two-parameter constructor
        {
            x=3, y=m, z=k;
            cout << "\nParametric constructor is called." << endl;
        }

        Cubicle( Cubicle & c2)           // copy constructor
        {
            x=c2.x, y=c2.y, z=c2.z;
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

    Cubicle c2(3);          // scope: main()
    cout << "Volume of cube2 = " << c2.volume();

    {
    Cubicle c3(4,5);          // scope: main()
    cout << "Volume of cube3 = " << c3.volume();
    }

    {
    Cubicle c4;             // scope: block{}
    c4 = c2;
    cout << "Volume of cube3 = " << c4.volume() << "\n";
    }

// return 0;
}