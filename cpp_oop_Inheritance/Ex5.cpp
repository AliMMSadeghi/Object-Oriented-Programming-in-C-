// protected inheritance 

#include<iostream>

using std::cout;
using std::endl;

//////////////////////////////////
class B
{
    protected:
        int x;
        int s()
            {return x*x;}

    public:
        int y;
        int p()
            {return x*y;}    
};
//////////////////////////////////
class D : protected B
{

/*  protected:
        int x;
        int s()
            {return x*x;}

        int y;
        int p()
            {return x*y;}   */

    public:
        void setx(int a)
            {x=a;}

        void sety(int p)
            {y=p;} 

        int ds()
            {return s();}

        int dp()
            {return p();}
};
/////////////////////////////////
int main()
{
    D ob;
    ob.setx(2);
    cout << ob.ds() << endl; // 2*2=4

    ob.sety(3);
    cout << ob.dp() << endl; // 2*3=6

}