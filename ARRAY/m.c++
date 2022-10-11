//program demo using arrays
#include<iostream>
using namespace std;

int main(){
    int a[] = {10, 20, 30, 40, 50};
    //print array elements
    cout << "The given array is: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i]<<endl;
    }
    
    return 0;
}