#include<iostream>
using namespace std;

int main(){
    //cin >> value/variable name where a is stored;

    int a;
    cin >> a;
    cout << a << endl;

    //Taking Multiple Inputs in Same Line
    //Note : Each input value must be seperated by a space or a new line

    int b,c,d;

    cin >> b >> c >> d;

    cout << b << endl;
    cout << c << endl;
    cout << d << endl; 

    string str;

    cin >> str; // if input is Hello World
    cout << str << endl; // Output is Hello

    //To input whole string with space

    getline(cin , str);
    cout << str << endl;

}