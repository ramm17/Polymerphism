#include<iostream>
#include<conio.h>
using namespace std;
class Shape//base class
{
protected:
    int width,height;
public:
    Shape( int a = 0, int b = 0)//constructor
    {
        width = a;
        height = b;
    }
    virtual int area()
    {
        cout<< "Parent class area" <<endl;
        return 0;
    }
};
class Rectangle: public Shape
{
public:
    Rectangle( int a = 0,int b = 0):Shape(a, b) { }//constructor
    int area()
    {
        cout << " Rectangle class area is "<<(width * height)<<endl;
    }
};
class Triangle: public Shape
{
public:
    Triangle( int a = 0,int b = 0):Shape(a, b) { }//constructor
    int area()
    {
        cout << "Triangle area is " <<(width * height / 2)<<endl;
    }
};
//Main function for the program
int main()
{
    Shape *sha;
    int l,b,ba,h;
    cout<<"Enter the length and breadth for Rectangle: "<<endl;
    cin>>l>>b;
    cout<<"Enter the base and height for Triangle: "<<endl;
    cin>>ba>>h;
    Rectangle rec(l,b);
    Triangle tri(ba,h);
    //store the address of Rectangle
    sha = &rec;
    //call rectangle area.
    sha->area();
    //store the address of Triangle
    sha = &tri;
    //call triangle area.
    sha->area();
    getch();
    return 0;
}
