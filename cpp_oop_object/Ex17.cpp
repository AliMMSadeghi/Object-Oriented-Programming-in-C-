// accessing private fcn member through a public fcn member
#include<iostream>
#include<cstring>
//#include<conio.h>
using namespace std;
/////////////////////////////////////////////

class Cuboid
{
    private:
        int volume();
        int x,y,z;
    public:
        Cuboid(int a, int b, int c):x(a),y(b),z(c) // {x=a, y=b, z=c}
        {}
    // A public fcn to just pass on the private fcn
    int Volume()
    {
        return volume();
    }
// "Volume" and "volume" are different : case sensitive
};

// we can define the private fcn. "v"olume outside of the class, because of the public fcn "V"olume
int Cuboid::volume()
    {return x*y*z;}

int main()
{
    Cuboid C1(2,3,4);
    cout << C1.Volume() << "\n";
}