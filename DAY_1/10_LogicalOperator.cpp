#include<iostream>
using namespace std;

int main(){
    int x = 5, y = 7, z =10;
    //AND
    cout << ((x < y) && (z < y)) << endl; //false

    //OR
    cout << ((x < y) || (y < z)) << endl; //true

    //NOT
    cout << !((x < y) || (y < z)) << endl; //false
}