//program demo using class
#include<iostream>
using namespace std;
class Room{
    private:
        double length;
        double breadth;
        double height;
    public:
        void getData();
        void showData();
};
void Room::getData(){
    length = 3;
    breadth= 4;
    height = 4;
}

void Room::showData(){
    cout << "Length: " <<length<<endl;
    cout << "Breadth: " <<breadth<<endl;
    cout << "Height: " <<height<<endl;
}

int main(){
    double area;
    Room obj;
    obj.getData();
    obj.showData();

    return 0;
}