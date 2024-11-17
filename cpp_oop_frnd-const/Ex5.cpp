// Friends can access private members of a class

#include <iostream>
#include <cstring>

using namespace std;

//////////////////////////////////////

class Count
{ 
    private:
        int x;

    public:
        Count():x(0)
            {}

        void print()
            {cout << x << endl;}

    friend void setX(Count &, int); // 
};

//////////////////////////////////////
void setX(Count &c,int val) // &?
    {c.x = val;}
//////////////////////////////////////

int main()
{
    Count k;
    k.print();

    setX(k,2);
    k.print();
}

