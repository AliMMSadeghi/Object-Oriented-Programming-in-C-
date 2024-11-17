// public inheritance 

#include<iostream>

using std::cout;
using std::endl;

//////////////////////////////////
class B
{
    private:
        int x;
        int S()
            {return x*x;}

    public:
        int m;
        void set(int p)
            {x=p;}

        int f()
            {return S();}
};
//////////////////////////////////
class D : public B
{
// here we cannot access the private "S" fcn in class B unless through the "f" function
    public:
        int n;
};
/////////////////////////////////
int main()
{
    D ob;

    ob.m = 4;
    ob.n = 3;
    ob.set(2);

    cout << ob.m + ob.n + ob.f() << endl; // 4+3+(2*2) = 11
}