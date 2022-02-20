#include <iostream>
using namespace std;

const float PI=3.142;
int a=10;

void display(){
    int a=20;
    cout << " value of inside display function " << a;
    a=50;
    cout << " \nValue of inside diaplay function "<< a;

}

void displayAnother(int a){
    cout << "\nValue of inside another display function "<< a;
}

void Area(int radius){
    float area=PI * radius * radius;
    cout<< " \nArea is :"<<area;
}
int main(){
// global variable
    display();
    cout <<" \nValue of outside display function "<<a;
    displayAnother(30);
    Area(12);
}