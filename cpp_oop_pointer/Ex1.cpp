// pointer to a class

#include <iostream>

using namespace std;
//////////////////////
class List
{
    private:
        int x;
        int y;

    public:
        void set()
        {
            int a,b;
            cout << "Enter a : " << "\n";
            cin >> a;
            x = a;

            cout << "Enter b : " << "\n";
            cin >> b;
            y = b;

        }

        void show() 
            {cout << endl <<  x << endl << y << endl;}
};
/////////////////////

int main()
{
    List ob;
    List *p;
    p = & ob;
    p -> set();
    (*p).show(); // p->show()
}
