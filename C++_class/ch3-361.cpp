#include <iostream>
using namespace std;
int main(){
    // Even Do
    int num;
    string result;
    cout << "Enter any number : ";
    cin >> num;
    // result =(num %2==0)?"Even":"ODD"; Same below code.
    result =(num %2)?"ODD":"EVEN";
    // if(num%2==0){
    //     result="EVEN";
    // }else{
    //     result="ODD";
    // }

    cout << num <<" is " << result << endl;
    
    return 0;
}