using namespace std;


#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
private:
double radius, area;
string color;

public:
Circle(); //Default constructor
Circle(double radius=0, string color=""); //parametrized constructor

double getRadius()const;
void setRadius(double radius);
double getArea()const;

string getcolor();
void setcolor(string color) ;

double compareArea(double temp);

};
#endif
