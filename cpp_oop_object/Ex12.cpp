// How to access private array and string data
#include<iostream>
#include<cstring>
//#include<conio.h>
using namespace std;
/////////////////////////////////////////////

class Cubicale
{
    private:
        int w, h, l;
    public:
        void set(int, int, int);
        int volume();
};


void Cubicale::set(int width, int height, int length)
{w = width, h= height, l=length;}

int Cubicale::volume()
{return w*h*l;}

int main()
{
    Cubicale cube1;
    Cubicale cube2;

    cube1.set(1,2,3);
    cube2.set(4,5,6);

    cout << "Volume of cube1 = " << cube1.volume() << "\n";
    cout << "Volume of cube2 = s" << cube2.volume() << "\n";
}
