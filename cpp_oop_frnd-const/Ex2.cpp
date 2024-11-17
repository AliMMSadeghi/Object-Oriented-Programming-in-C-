// class with more than one friend fcn
#include <iostream>
#include <cstring>

using namespace std;
//////////////////////////////////////

class Rect
{ 
        friend int Area(Rect); // fcn prototype
        int x,y;

    public:
        Rect(int L, int W) {x=L,y=W;}
        friend double f(Rect, double);  // fcn prototype
};

//////////////////////////////////////

int Area(Rect b)  // With "Area" being a friend fcn, it can access the private vars "x" and "y"
    {return b.x*b.y;}

//////////////////////////////////////
// we can access the private vars (x and y) because of the frnd fcn "f" through the obj "b"
double f(Rect b, double s)
    {return b.x*b.y * s;}

//////////////////////////////////////


int main()
{
    Rect ob(2,3);

    cout << Area(ob) << "\n";

    double A = 4.5;

    cout << f(ob,A) << endl;

}