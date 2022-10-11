//program demo using arrays
#include<iostream>
using namespace std;

int main(){
    int a[5];
    //reading array elements
    cout << "enter array elements: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    //printing array elements
    cout << "The given array is: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i]<<endl;
    }
    
    return 0;
}