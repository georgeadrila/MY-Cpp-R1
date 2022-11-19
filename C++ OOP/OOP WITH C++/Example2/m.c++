//program demo using a class
#include<iostream>
using namespace std;

class room
{
private:
    double length; //ACCESS SPECIFIER   
    double breadth;
    double height;

public:
    void getData(){
        length = 2;
        breadth = 3;
        height = 5;
    }
    void showData(){
    cout << "Length; " <<length<<endl;
    cout << "Braedth; " <<breadth<<endl;
    cout << "Height; " <<height<<endl;
    }
};
int main(){
    double area;
    room obj;
    obj.getData();
    obj.showData();

}
