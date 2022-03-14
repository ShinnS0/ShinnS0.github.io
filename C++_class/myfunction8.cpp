#include <iostream>
using namespace std;
//Global variable
int findMax(int,int);

int main(){
    int num1,num2;
    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;
    cout << "Maximum of " << num1 << " and " << num2 << " is " << findMax(num1,num2) << endl;

    return 0;
}
int findMax(int a,int b){
    return (a<b)?b:a;
}