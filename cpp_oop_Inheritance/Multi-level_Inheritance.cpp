// Multi-level inheritance

#include<iostream>
 
using std::cout;
using std::endl;
//////////////////////////////////
class B{
    protected:
        int x;

    public:
        void setb(int b)
            {x=b;}

        void f()
            {cout<<"B"<<endl;}
};
//////////////////////////////////
class D1: public B
{
    protected: 
        int x1;

    public:
        void set1(int n)
            {x1 = n;}
        void f()
            {cout<<"D1"<<endl;}
};
//////////////////////////////////
class D2: public D1
{
    protected:
        int x2;

    public:
        void set2(int p)
            {x2=p;}
        void f()
            {cout<<"D2"<<endl;}
};
//////////////////////////////////
class D3 : public D2
{
    private: 
        int x3;
    public:
        void set3(int q)
            {x3 = q;}
        void f ()
            {cout<<"D3"<<endl;}
        int k()
            {return x3 + D2::x2 + D1::x1 + B::x;}
             // Because function names are unique in this example, we don't need to specify their regoin
             // {return x3 + x2 + x1 + x;}
};
//////////////////////////////////
int main()
{
    D3 ob;

    ob.B::setb(1); // B::setb() --> setb() function belongs to the class "B" (in case we have multiple fcns with similar names in multiple classes)
    ob.D1::set1(2);  // x1=2
    ob.D2::set2(3);  // x2=3
    ob.set3(4);      // x3=4    

 // Because function names are unique in this example, we don't need to specify their regoin
 /* ob.setb(1);
    ob.set1(2);
    ob.set2(3);   
    ob.set3(4); */

    cout<<ob.k()<< endl;

    ob.B::f();
    ob.D1::f();
    ob.D2::f();
    ob.D3::f();
}