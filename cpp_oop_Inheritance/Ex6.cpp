// "Private" inheritance
// The public and protected members of the base class are accessed through "Private" functions of derived class.
 
#include<iostream>
 

using std::cout;
using std::endl;
//////////////////////////////////
class B{
    protected:
        int m;

    public:
        int k;

        int sk ()
            {return k*k;}

        int sm ()
            {return m*m;}

};
//////////////////////////////////
class D : private B
{
    public:
        int a;
        void setm()
        {m=a;}

        void setk(int b)
            {k=b;}

        int dsm()
            {return sm();}

        int dsk()
            {return sk();}
};
//////////////////////////////////

int main()
{
    D ob;
    ob.setk(3);

    cout<<ob.dsk()<<endl;

    ob.a = 2;
    ob.setm();

    cout<<ob.dsm()<<endl;

}

