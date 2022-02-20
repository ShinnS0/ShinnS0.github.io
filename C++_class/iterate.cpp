#include <iostream>
using namespace std;
int main(){
    // 1: initialize
    int i=0;
    // 2: Test
    while(i<10)
    {
        // 3:Increase or decease
        i++;
        cout << "Hello "<< i << endl;
    }
    
    for (i=1; i<10; i++)
    {
        cout << "Hello : " << i << endl;
    }
    cout << "Value of i after for loop : "<< i << endl;
    return 0;
}