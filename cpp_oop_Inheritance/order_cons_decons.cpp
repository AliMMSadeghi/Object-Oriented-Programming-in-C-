// Order of executoin of constructors and deconstructors in inheritance.

#include<iostream>
 
using std::cout;
using std::endl;
//////////////////////////////////
class B{
    public:
        B()
        {cout << "Constructor of B \n";}

        ~B()
        {cout << "Destructor of B \n";}
};
//////////////////////////////////
class D1: public B
{
    public:
        D1()
        {cout << "Constructor of D1 \n";}

        ~D1()
        {cout << "Destructor of D1 \n";}
};
//////////////////////////////////
class D2: public D1
{
    public:
        D2()
        {cout << "Constructor of D2 \n";}

        ~D2()
        {cout << "Destructor of D2 \n";}
};
//////////////////////////////////
int main()
{
    D2 ob;
    cout << endl << endl;
    return 0;
}