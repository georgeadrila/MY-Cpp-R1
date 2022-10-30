#include <iostream>
using namespace std;

void add(int a, int b, int d){
    int c =  (a + b)/d;
    cout << c;
};

int main(){
    add(4, 8, 3);
}