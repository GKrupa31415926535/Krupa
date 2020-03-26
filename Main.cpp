#include <iostream>
#include "Circle.cpp" //probably should be .h but it wasn't working that way
#include <string>
//#undef main
using namespace std;

int main()
{
double radius;
string color;
Circle circle;  //overloaded?

{
    cout << "What's the radius of the first circle: ";
    cin >> radius;
    circle.setRadius(radius);
    cout << "Area of the circle is: "<< circle.getArea()<<"  Radius of circle is: "<<circle.getRadius();
    cout<<"May i know color of that circle?";
    cin>>color;
    circle.setcolor(color);
    cout<<"Ah yes.. a "<<circle.getcolor()<< " circle with a radius of: "<<circle.getRadius()<<"and area of: "<<circle.getArea();
}
double temp=circle.getArea();

cout<<"Compare first circle with other one, please enter radius of second circle"<<endl;
Circle circle2;
cin>>radius;
circle2.setRadius(radius);
circle2.compareArea(temp);



int n=0;
char s;
cout<<"How many circles do you want to enter: ";
cin>>n;
Cirlce circles[n];

for(int i=0,i<n,i++)
{
    cout<<"Do you want to initialize circle nr."<<i+1<<"y/n: ";
    cin>>s;
    if(s=='y')
    {
    cout<<"Initializing circle nr."<<i+1<<endl;
    cout << "What's the radius circle: ";
    cin >> radius;
    cout << "What's the color circle: ";
    cin >> radius;
    circles[i].setRadius(radius);
    circles[i].setcolor(color);
    }
    else
    {
        circle[i];
    }
}
cout<<"Circles in array (nr. \radius \color): "<<endl;
for(int i=0,i<n,i++)
{
    cout<<i<<"  "<<"  "<<circles[i].getradius()<<"   "<<circles[i].getcolor()<<endl;
}




return 0;
}
