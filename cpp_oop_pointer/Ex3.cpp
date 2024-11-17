// pointer to a class

#include <iostream>

using namespace std;
//////////////////////
class k
{
    private:
        int x,y;

    public:
        k (int a, int b) // constructor
            {x=a, y=b;}

        void show()
            {cout << x << "----" << y << endl;}
};
//////////////////////////////

int main()
{
    k ob1(1,2); // calls the constructor fcn
    k *p;

    p = & ob1;

    p -> show();

    k ob2(3,2);

    p = & ob2;

    (*p).show();
    
}