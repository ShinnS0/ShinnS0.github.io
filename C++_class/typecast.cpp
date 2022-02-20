#include <iostream>
using namespace std;

int main(){

    char x = '+';
    string z = "Hello";
    int y =2;

    y=x;//implicit char => int.
    cout << "Y is :"<< y << endl;

    float h = y + 1.2;
    cout << "Float h is " << h << endl;

    int a= 15;
    int b= 2;
    float c =(float)a/b;
    cout << "Value of float c = " << c << endl;

    return 0;
}