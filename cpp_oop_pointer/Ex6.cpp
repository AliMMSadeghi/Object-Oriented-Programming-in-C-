// definition of pointer to member function of a class
// pointer to a class vs. pointer to a function

#include <iostream>

using namespace std;
/////////////////////////////////
class Rect
{
    int x,y;

    public:
        void f (int L, int W)
        {x = L, y = W;}

        int Area()
            {return x*y;}
};
/////////////////////////////////
int main()
{
    // p1 is a pointer to an fcn with 2 inputs and no outputs
    void (Rect :: *p1)(int, int); // pointer to a class

    p1 = & Rect :: f;

    Rect R1;

    (R1.*p1)(2,3);  // the same as calling the "f" function // x=2, y=3

    cout << R1.Area( ) << endl;

    /////////////////////////////////
    
    Rect R2;

    Rect *p2; // ? pointer to a class

    p2 = &R2; // the address of the object "R2" assigned to "p2"

    (p2->*p1)(4,5); // another way to call the fcn f

    cout << R2.Area() << "\n";





}
