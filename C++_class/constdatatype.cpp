#include <iostream>
using namespace std;

int main(){
    const int WIDTH = 10;
    const int HEIGHT = 20;
    const string NAME = "Rectangle";
    int area;
    area = WIDTH * HEIGHT;
    cout << "Value of WIDTH : " << WIDTH;
    cout << "\nValue of HEIGHT : " << HEIGHT;
    cout << "\nValue of area : " << area;
    cout << "\nName is : " << NAME;
    return 0;
}