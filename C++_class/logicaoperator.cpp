#include <iostream>
using namespace std;

int main(){
    bool result;
    int a = 5;
    int b = 6;
    result = (a<1) || (b>2);
    cout << "The result is " << result << endl;
    cout << "Not of the result is " << !result << endl;

    return 0;
}