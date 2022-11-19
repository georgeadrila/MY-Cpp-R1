//program demo using a class
#include<iostream>
using namespace std;

class room
{
public:
    double length; //ACCESS SPECIFIER   
    double breadth;
    double height;
};
int main(){
    room obj;
    obj.length = 10;
    obj.breadth = 2;
    obj.height = 3;
    cout << "Length; " <<obj.length<<endl;
    cout << "Braedth; " <<obj.breadth<<endl;
    cout << "Height; " <<obj.height<<endl;
    

    double area = obj.length * obj.breadth;
    cout << "The area of the room is " <<area;

}
