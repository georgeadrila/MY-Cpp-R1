#include <iostream>
using namespace std;
// using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee

{
private:
    string Name;
    string Company;
    int Age;
public:
void setName(string name){
    Name = name;
}
string getName(){
    return Name;
}
void setCompany(string company){
    Company = company;
}
string getCompany(){
    return Company;
}
void setAge(int age){
    Age = age;
}
int getAge(){
    return Age;
}


    void intro(){
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion(){
        if (Age< 30)
        {
            cout << Name << " got promoted!" << endl;
        }else{
            cout << Name << " No promotion for you" << endl;
        }
        
    }
};
int main(){
    Employee employee1 = Employee("George", "Google", 25);
    employee1.intro();

    Employee employee2 = Employee("John", "faceebok", 30);
    employee2.intro();
    // employee1.setAge(23);
    // cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
    employee1.AskForPromotion();
    employee2.AskForPromotion();
}

