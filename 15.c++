// program to compare strings
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string1, string2;
    cout << "Enter first string: ";
    getline(cin, string1);
    cout << "Enter second string: ";
    getline(cin, string2);
    if (string1.compare(string2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;
    return 0;
}