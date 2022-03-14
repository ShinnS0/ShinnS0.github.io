#include <iostream>
using namespace std;

void display(char ch='*',int no=3){
    for(int i=0;i<no;i++){
        cout << ch << "\t";
    }
    cout << endl;
}
int addNumbers(int a, int b=7,int c=29){
    return (a+b+c);
}
int main(){
    cout << "Call function with one argument : " << addNumbers(2) << endl;
    cout << "Call function with 2 arguments : " << addNumbers(2,5) << endl;
    cout << "Call function with 2 arguments : " << addNumbers(1,2,3) << endl;

    cout << "Call function with no argments : "<< endl;
    display();
    cout << "Call function with one argument : " << endl;
    display('$');
    cout << "Call function with arguments : " << endl;
    display('#',5);

    return 0;
}