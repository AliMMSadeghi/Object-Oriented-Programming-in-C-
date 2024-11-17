// pointer to a class

#include <iostream>

using namespace std;
//////////////////////
class k
{
    private:
        int x,y;

    public:
        void f(int a, int b)
            {x=a, y=b;}

        void s()
            {cout << x+y << endl;}
};
//////////////////////////////

int main()
{
    k ob;
    k *p;

    p = & ob;

    p -> f(1,2);
    p -> s();
}