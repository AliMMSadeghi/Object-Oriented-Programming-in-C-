// declaration of static members in a class

#include <iostream>
#include <cstring>

using namespace std;

//////////////////////////////////////

class Cuboid
{ 
    private:
        int y;
        static int z; // declaration only-no memory allocation-should be defined after the class

    public:
        static int x; // declaration only-no memory allocation-should be defined after the class
        Cuboid(int W):y(W){}

    static void Display() // static function
        {cout << z << endl;}; 
    
    int volume();

};
//////////////////////////////////////
// static vars should be defined (immediately?) (and initialized?) after the class
int Cuboid :: x = 2;
int Cuboid :: z = 3;

//////////////////////////////////////
int Cuboid::volume()
    {return x*y*z;}
//////////////////////////////////////

int main()
{
    // static fcns can be called without an object
    Cuboid::Display();

    Cuboid ob1(4); // y=4;

    cout << ob1.x << endl;
    cout << ob1.volume() << endl;

    Cuboid ob2(5);
    cout << ob2.x << endl;
    cout << ob2.volume() << endl;
}

