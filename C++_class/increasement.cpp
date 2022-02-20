#include <iostream>
using namespace std;

int main(){
    int a = 2;
    // a++;
    cout << " Value of a after increment : a = " << a++ << endl;
    cout << "After cout a = " <<a << endl;

    int b = 5;
    cout << "Value of after decrement b = " << b-- << endl;
    cout << "Value of b = " << b << endl;

    int c = ++a + b; //a=4 , b=4 => c=4 + 4 =8
    int d = a + b--; //a = 4 ,b=4 => d=8 , b=3
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << " Value of b after operation b = " << b << endl;
    cout << " Value of a after operation a = " << a << endl;

    return 0;
}