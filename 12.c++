#include<iostream>
#include <string.h>
using namespace std;

class Employee
{
	int empcode;
	char empname[20];
public:
	void get_employee()
	{
		cout << "Enter the employee code: ";
		cin >> empcode;
		cout << "Enter the employee name: ";
		cin >> empname;
	}
	void display_employee()
	{
		cout << "Employee code: " << empcode << endl;
		cout << "Employee name: " << empname << endl;
	}
};

class Manager : public Employee
{
    char designation[20];
    int clubdues;
public:
    void get_manager()
    {
        get_employee();
        cout << "Enter the designation: ";
        cin >> designation;
        cout << "Enter the club dues: ";
        cin >> clubdues;
    }
    void display_manager()
    {
        display_employee();
        cout << "Designation: " << designation << endl;
        cout << "Club dues: " << clubdues << endl;
    }
    int get_clubdues()
    {
        return clubdues;
    }
};

class Scientist : public Employee{
    char deptname[20];
    char publication[20];
public:
    void get_scientist()
    {
        get_employee();
        cout << "Enter the department name: ";
        cin >> deptname;
        cout << "Enter the publication: ";
        cin >> publication;
    }
    void display_scientist()
    {
        display_employee();
        cout << "Department name: " << deptname << endl;
        cout << "Publication: " << publication << endl;
    }

    // get department name
    char* get_deptname()
    {
        return deptname;
    }
};

class Labourer : public Employee{
    char shift[20];
    int hourlywage;
public:
    void get_labourer()
    {
        get_employee();
        cout << "Enter the shift: ";
        cin >> shift;
        cout << "Enter the hourly wage: ";
        cin >> hourlywage;
    }
    void display_labourer()
    {
        display_employee();
        cout << "Shift: " << shift << endl;
        cout << "Hourly wage: " << hourlywage << endl;
    }
};

int main(){
    // accept the details of n employees
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    Manager m[n];
    Scientist s[n];
    Labourer l[n];
    for(int i=0; i<n; i++){
        cout << "Enter the details of manager " << i+1 << endl;
        m[i].get_manager();
        cout << "Enter the details of scientist " << i+1 << endl;
        s[i].get_scientist();
        cout << "Enter the details of labourer " << i+1 << endl;
        l[i].get_labourer();
    }

    // display all scientists from the department 'chemistry'
    char deptname[20];
    cout << "Enter the department name: ";
    cin >> deptname;
    cout << "Scientists from the department " << deptname << endl;
    for(int i=0; i<n; i++){
        if(strcmp(s[i].get_deptname(), deptname) == 0)
            s[i].display_scientist();
    }

    return 0;
}
