#include <iostream>
using namespace std;

class Person{
    char name[30];
    int age;

    public:
        void getdata(void);
        void display(void);
};
void Person::getdata(void){
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
}
void Person::display(void){
    cout << "Name: \n" << name;
    cout << "Age: \n" << age;
}
int main(){
    Person p;
    p.getdata();
    p.display();

    return 0;
}