// public inheritance 

#include<iostream>

using std::cout;
using std::endl;

/////////////////////////////////////////
class B
{
    protected:
        int m;
    
    public:
        int k;
        int S()
            {return k*k;}

        int f()
            {return k*m;}

};
/////////////////////////////////////////

class D : public B
{
 /* protected:
        int m;
    
    public:
        int k;
        int S()
            {return k*k;}

        int f()
            {return k*m;} */
    
    public:
        void set (int a)
            {m=a;}
};

////////////////////////////////////
int main()
{
    D ob;
    ob.k =2;
    cout << ob.S() << endl;

    ob.set(3);

    cout << ob.f() << endl;
    
}