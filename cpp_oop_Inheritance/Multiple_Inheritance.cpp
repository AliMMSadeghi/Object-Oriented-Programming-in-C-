// Multiple inheritance

#include<iostream>
 
using std::cout;
using std::endl;
//////////////////////////////////
class B1{
    private:
        int x;

    public:
        int a;
        void setx()
            {x=a;}

};
//////////////////////////////////
class B2
{
    public:
        int k;
};
//////////////////////////////////
class D: public B1, public B2
{
    public:
        int y;
};
//////////////////////////////////
int main()
{
    D ob;

    ob.a = 1;
    ob.y = 2;
    ob.k = 3;

    cout<<ob.a+ob.y+ob.k<< endl;
}