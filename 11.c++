#include<iostream>
#include<cmath>
using namespace std;


class Point
{
    int x, y;
public:
    Point(int x1, int y1) {
         x = x1; 
         y = y1; 
    }
    int getX(){
         return x;
        }
    int getY(){
         return y; 
        }

    // function to accept a point
    friend istream& operator >>(istream &input, Point &p);
    // function to display a point
    friend ostream& operator <<(ostream &output, const Point &p);

    // function to find the distance between two points using operator overloading  
    friend double operator -(Point p1, Point p2);

};

// function to accept a point
istream& operator >>(istream &input, Point &p)
{
    input >> p.x >> p.y;
    return input;
}

// function to display a point
ostream& operator <<(ostream &output, const Point &p)
{
    output << "(" << p.x << ", " << p.y << ")";
    return output;
}

// function to find the distance between two points using operator overloading
double operator -(Point p1, Point p2)
{
    int x = p1.x - p2.x;
    int y = p1.y - p2.y;
    return sqrt(x*x + y*y);
}

int main()
{
    Point p1(10, 15), p2(25, 30);
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    cout << "Distance between p1 and p2 = " << p1 - p2 << endl;
    
    return 0;
}
