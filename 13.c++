#include <iostream>
using namespace std;

class Employee
{
    int empcode;
    char name[20];  
public:
    void get_employee()
    {
        cout << "Enter the employee code: ";
        cin >> empcode;
        cout << "Enter the employee name: ";
        cin >> name;
    }
    void display_employee()
    {
        cout << "Employee code: " << empcode << endl;
        cout << "Employee name: " << name << endl;
    }

    // get employee code
    int get_empcode()
    {
        return empcode;
    }
};

class Fulltime : public Employee
{
    float dailywage;
    int numberofdays;
    int salary;
public:
    void get_fulltime()
    {
        get_employee();
        cout << "Enter the daily wage: ";
        cin >> dailywage;
        cout << "Enter the number of days: ";
        cin >> numberofdays;
        salary = dailywage * numberofdays;
    }
    void display_fulltime()
    {
        display_employee();
        cout << "Salary: " << salary << endl;
    }
    int get_salary()
    {
        return salary;
    }
};

class Parttime : public Employee
{
    float wageperhour;
    int hoursworked;
    int wages;
public:
    void get_parttime()
    {
        get_employee();
        cout << "Enter the wage per hour: ";
        cin >> wageperhour;
        cout << "Enter the number of hours worked: ";
        cin >> hoursworked;
        wages = wageperhour * hoursworked;
    }
    void display_parttime()
    {
        display_employee();
        cout << "Wages: " << wages << endl;
    }
    int get_wages()
    {
        return wages;
    }
};

int main()
{
    // accept details of n employees and calculate the total salary
    int n, i, total = 0;
    cout << "Enter the number of employees: ";
    cin >> n;
    Fulltime f[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter details of fulltime employee " << i + 1 << endl;
        f[i].get_fulltime();
        total += f[i].get_salary();
    }
    cout << "Total salary: " << total << endl;
    // display details of n employees
    for (i = 0; i < n; i++)
    {
        cout << "Details of fulltime employee " << i + 1 << endl;
        f[i].display_fulltime();
    }

    // search a given employee code in the list
    int code, found = 0;
    cout << "Enter the employee code to search: ";
    cin >> code;
    for (i = 0; i < n; i++)
    {
        if (f[i].get_empcode() == code)
        {
            cout << "Employee found" << endl;
            f[i].display_fulltime();
            found = 1;
            break;
        }
    }
    
    return 0;
}


