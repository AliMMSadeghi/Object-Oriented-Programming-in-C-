// friend function to a class
#include <iostream>
#include <cstring>

using namespace std;
//////////////////////////////////////

class Rect
{
    private:
        int x,y;
        friend int Area(Rect a); // fcn prototype

    public:
        Rect(int L, int W) {x=L,y=W;}
};

//////////////////////////////////////

int Area(Rect b)  // With "Area" being a friend fcn, it can access the private vars "x" and "y"
{
    return b.x*b.y;
}

//////////////////////////////////////


int main()
{
    Rect ob(2,3);

    cout << Area(ob) << endl;

}