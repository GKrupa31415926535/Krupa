#include <iostream>
#include <string>
#include <cmath>
#include "Circle.h"
using namespace std;

Circle::Circle(double radius, string color)
{
  radius=radius;
   color=color;
}
double Circle::getRadius()const
{
return radius;
}
void Circle::setRadius (double r)
{
radius = r;
}
double Circle::getArea() const
{
return   M_PI*radius*radius;
}

void Circle::setcolor (string color) //setter
{
color=color;
}
string Circle::getcolor ()
{
color=color;
}

double Circle::compareArea(double temp)
{
    double area2;
    area2=M_PI*radius*radius;

    //test, in final version should return pointer
    if(area2==temp)
    {
        cout<<"Both circles have the same area of:"<<temp<<endl;
    }
    else
    if(area2<temp)
    {
        cout<<"Second cirlce is smaller and has area of: "<<area2<<endl;
        //return &circle;
    }
    else
        cout<<"First circle is larger than the second one which has area of: "<<area2<<endl;
        //return &circle2;
}

/*
Circle::~Circle()
{
    //destructor
}
*/
