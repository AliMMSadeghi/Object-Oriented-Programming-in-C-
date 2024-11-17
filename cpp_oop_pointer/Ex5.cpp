
// Accessing private members from the address of the object

#include <iostream>

using namespace std;
//////////////////////

class List
{
    private:
        int x, y;

    public:
        int z;

        List(int a, int b)
        {x=a, y=b;}
};

/////////////////////////////
int main()
{
    List ob(1,2);
    ob.z =3;

    int *p;
    p = (int*) & ob;

    cout << *p << "------" << p << endl; // "p" pointing to x

    p++;
    cout << *p << "------" << p << endl; // "p" pointing to y

    p++;
    cout << *p << "------" << p << endl; // "p" pointing to z
}