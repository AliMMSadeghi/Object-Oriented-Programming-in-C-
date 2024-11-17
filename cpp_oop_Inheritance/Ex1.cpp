// public inheritance 

#include<iostream>

using std::cout;
using std::endl;

////////////////////////////////////
class B
{
    public:
        int a, b;
        int f1()
            {return a*b;}
};
///////////////////////////////////
class D : public B // this means the class D has access to all public members of the class B
{ 

 /* public:
    int a, b;
    int f1()
        {return a*b;} */

    public:
        int c;
        int f2()
            {return c+f1();}
};
///////////////////////////////////

int main()
{
    D ob;

    ob.a = 2;
    ob.b = 3;
    ob.c = 4;

    cout << ob.f2() << endl;

}