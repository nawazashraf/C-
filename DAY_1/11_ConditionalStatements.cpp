#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 7;
    int z = 10;

    if(x < y && y <z){  //Condition is true
        cout << "Y in between X and Z" << endl;

    }
    else{
        cout << "Y is not in between X and Z" << endl;
    }

    if(x > y){
        cout << "x > y" << endl;
    }
    else if(y > z){
        cout << "y > z" << endl;
    }
    else{
        cout << "x < z" << endl;
    }
}