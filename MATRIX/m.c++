//program demo using 2d arrays
#include<iostream>
using namespace std;

int main(){
    int i, j, matrix[3][3];
    //reading array elemnts
    cout << "Enter matrix array elements: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>> matrix[i][j];
        }
        
    }
    //print the given matrix
    cout << "The given matrix is: " <<endl;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}