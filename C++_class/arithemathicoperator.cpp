#include <iostream>
using namespace std;

int main(){
// declare variable
    int a,b;
    // a= 4;
    // b= 2;

    cout << "Enter First Number : ";
        cin >> a;
    cout << "Enter Second Number : ";
        cin >> b; //Request input.

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = (float)a / (float)b;
    int mod = a & b;

    cout << a << " + " << b << " = " << sum << endl;
    // cout << a << '+' << b << '=' << a+b;

    cout << a << " - " << b << " = " << sub << endl;

    cout << a << " * " << b << " = " << mul << endl;

    cout << a << " / " << b << " = " << div << endl;

    cout << a << " % " << b << " = " << mod << endl;
    return 0;
}