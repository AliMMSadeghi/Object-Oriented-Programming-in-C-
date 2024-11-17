// a function friend to more than one class
#include <iostream>
#include <cstring>

using namespace std;
//////////////////////////////////////
// we need this class prototype here for the call in the "Display" fcn in the "Rect" class
class Sqr;  
//////////////////////////////////////

class Rect
{ 
        int x,y;

    public:
        Rect(int a, int b)
            {x=a,y=b;}

        int area()
            {return x*y;}

        friend void Display (Rect R, Sqr S);  // fcn prototype
};

//////////////////////////////////////

class Sqr
{ 
        int z;

    public:
        Sqr(int C)
            {z=C;}

        int Area()
            {return z*z;}

        friend void Display (Rect R, Sqr S);  // fcn prototype
};

//////////////////////////////////////

void Display(Rect R, Sqr S)
{
    cout << "The area of the rectangle is = " << R.area() << "\n";
    cout << "The area of the square is = " << S.Area() << endl;
}

//////////////////////////////////////

int main()
{
    Rect R1(3,4);
    Sqr S1(5);

    Display(R1,S1);

}

