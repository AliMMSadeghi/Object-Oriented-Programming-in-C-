// declaration of a friend class to a class
#include <iostream>
#include <cstring>

using namespace std;

//////////////////////////////////////

class Cuboid
{ 
    public:

        int x,y,z;

        void sides(int L, int W, int H)
            {x=L,y=W,z=H;}

        int Area()
            {return 2*(x*y + x*z + z*y);}
        int volume()
            {return x*y*z;}

    friend class paint; // the class "paint" is a friend of the class Cuboid
};

//////////////////////////////////////

class paint
{ 
    private:
        int R;
    
    public:
        paint()      // default constructor
            {R=1;}
        paint(int S) // parametric constructor
            {R=S;}

        Cuboid C;

        int area()
            {return C.Area();}

        int cost(int R,Cuboid C)
            {return R* C.Area();}

};

//////////////////////////////////////

int main()
{
    Cuboid ob;
    ob.sides(2,3,4);

    cout << "Volume = " << ob.volume() << endl;
    cout << "Surface area = " << ob.Area() << endl;

    paint P;

    cout << "Cost of painting = " << P.cost(2,ob) << endl;
}

