//program demo using class
//program to compute area and volume of the room
#include<iostream>
using namespace std;
class Room{
    private:
        double length;
        double breadth;
        double height;
    public:
        void getData(){
            length = 3;
            breadth= 4;
            height = 4;
        }
        double calcArea(){
            return length * breadth;
        }
        double calcVolume(){
            return length * breadth * height;
        }
};


int main(){
    Room obj;
    obj.getData();
    cout << "The area of the room is: " <<obj.calcArea()<<endl;
    cout << "The volume of the room is: " <<obj.calcVolume()<<endl;

    return 0;
}