// Copy constructor in inheritance

#include<iostream>
 
using std::cout;
using std::endl;
///////////////////////////////////////////////////////////
class B{
    protected:
        int x;

    public:

        B()
            {x=4;}

        B(int a)
            {x=a;
            cout << "Base constructor"<<endl;}

        B(const B &b)
            {
                x = b.x;
                cout << "copy constructor of B." << endl;
            }

};
///////////////////////////////////////////////////////////
class D: public B
{
    private:
        int y;
    
    public:
        D()
        { y=5; }

        D(int k)
            {
                y = k;
                cout << "Derived class constructor." << endl;
            }
        int f()
            {return y;}
};
///////////////////////////////////////////////////////////
int main()
{
    D d1(3);
 
    D d2;

    // cout << d2.f() << endl; 
    d2 = d1;

    // D d2=d1;

    cout << d2.f() << endl; 
}