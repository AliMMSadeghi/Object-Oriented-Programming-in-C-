// Constructors of base and derived classes

#include<iostream>
 
using std::cout;
using std::endl;
///////////////////////////////////////////////////////////

class Cubicle
{
    private:
        int x, y, z;

    public:
        Cubicle()
        {}

        Cubicle(int a, int b, int c)
        {
            x = a;
            y = b;
            z = c;
            cout << "Constructor of Cubicle" << endl;
        }

        int area()
            {return 2*(x*y + x*z + y*z);}

};
///////////////////////////////////////////////////////////

class Cube : public Cubicle
{
    public:
        int Rate;
        Cubicle C;

        Cube(int L, int W, int H, int A) : Cubicle(L, W, H)
        {Rate = A;
        cout << "Constructor of Cube" << endl;}

        int cost(int Rate, Cubicle C)
            {return Rate*C.area();}
};
///////////////////////////////////////////////////////////

