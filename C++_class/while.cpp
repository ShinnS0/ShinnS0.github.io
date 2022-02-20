#include <iostream>
using namespace std;
int main(){
    // show hello world 10 time
    int i = 0; //initialize

    while(i<10){
        cout << "Hello world!" << endl;
        i++; // increasement
    } 
        cout << "Value of i after loop : " << i << endl;
        
        int j = 100;
        while(j>10){
            cout << j << endl;
            j -= 5;
        }
    return 0;
}