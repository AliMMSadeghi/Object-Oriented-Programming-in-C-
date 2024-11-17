// Abstract class and pure virtual function
#include <iostream>

using std::cout;
using std::endl;

/////////////////////////////////////////////////
class Animal
{
    public:
        virtual void sound()=0;
};
/////////////////////////////////////////////////   
class Dog : public Animal
{
    public:
        void sound()
        {cout<< "hap hap"<<endl;}
};
/////////////////////////////////////////////////
class Cat : public Animal
{
    public:
        void sound()
        {cout<< "miu miu"<<endl;}
};
/////////////////////////////////////////////////

int main()
{

    Dog D;
    Cat C;
    D.sound();
    C.sound();

}
