// Polymorphism

#include <iostream>

using std::cout;
using std::endl;
/////////////////////////////////////////////////
class Point
{
    private:
        int x, y;

    public:
        Point(int =0, int=0);

        void setX(int);
        int getX() const;

        void setY(int);
        int getY() const;

        virtual void print() const
            {cout<<'['<<getX()<<','<<getY()<<']'<<endl;}
};
/////////////////////////////////////////////////
// These functions are defined outside of the class definition
// We first write the class name followed by "::" then we write the function name
Point::Point(int a, int b)
    : x(a), y(b)
    { }
/////////////////////////////////////////////////
void Point::setX(int a)
        {x=a;}
/////////////////////////////////////////////////
int Point::getX() const
    {return x;}
/////////////////////////////////////////////////
void Point::setY(int b)
        {y=b;}
/////////////////////////////////////////////////
int Point::getY() const
    {return y;}
/////////////////////////////////////////////////
/////////////////////////////////////////////////
class Circle : public Point
{
    private:
        double radius;

    public:
        Circle (int=0, int=0, double=0.0);

        void setRadius(double);
        double getRadius() const;

        double getDiameter() const;
        double getCircumference() const;
        double getArea() const;

        virtual void print() const
        {
            cout<<endl;
            Point::print();
            cout<<"Radiuis="<<getRadius();
            cout<<endl;
        }
};
/////////////////////////////////////////////////
Circle::Circle(int a, int b, double r)
        : Point(a, b) // call base class constructor
{
    setRadius(r);
}
/////////////////////////////////////////////////
void Circle::setRadius(double r)
{
    radius = (r < 0.0 ? 0.0 : r);
}
/////////////////////////////////////////////////
double Circle::getRadius() const
{
    return radius;
}
/////////////////////////////////////////////////
double Circle::getDiameter() const
{
    return getRadius()*2;
}
/////////////////////////////////////////////////