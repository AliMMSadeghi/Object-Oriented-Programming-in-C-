// Initialization of private data with a public function:
#include<iostream>
#include<cstring>
//#include<conio.h>
using namespace std;
/////////////////////////////////////////////

class Market
{
    private:
        int x,y;
    public:
        void Setprice(int a, int b)
        {
            x=a, y=b;
        }
        void Display()
        {
            cout << "item1 = " << x << endl;
            cout << "item2 = " << y << endl;
        }
};

/////////////////////////////////////////////

int main()
{
    Market k;
    k.Setprice(2,2);
    k.Display();
}