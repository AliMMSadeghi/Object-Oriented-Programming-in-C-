// static member function of a class

#include <iostream>
#include <cstring>

using namespace std;
using std :: cout;
using std :: endl;

//////////////////////////////////////

class t
{ 
    private:
        int count;
        int a; 
       //  const int a; 

    public:
        t(int c = 0, int i = 1);

        void add()
        {
            count += a;
        }

        void print() const
        {
            cout << count << "------" << a << endl;
        }

};

//////////////////////////////////////
t::t(int c,int i)
{
    count = c;
    a = i; // ERROR: Cannot modify a const object
}

//////////////////////////////////////

int main()
{
  t ob(2,3);
  ob.print(); // 2----3

  ob.add();

  ob.print();


}