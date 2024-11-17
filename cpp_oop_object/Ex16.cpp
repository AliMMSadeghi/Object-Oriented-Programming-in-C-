// A new way for assigning private members using constructor
#include<iostream>
#include<cstring>
//#include<conio.h>
using namespace std;
/////////////////////////////////////////////

class Cuboid
{
    private:
        int x,y,z;
    public:
        Cuboid(int L, int W, int H):x(L),y(W),z(H) // {x=L, y=W, z=H}
        {}
    int volume();
};

int Cuboid::volume()
    {return x*y*z;}

int main()
{
    Cuboid C1(5,6,4);
    cout << C1.volume() << "\n";
}