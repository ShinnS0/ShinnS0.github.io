#include <iostream>
using namespace std;
int main(){
    for (int i=1,j=10 ; (i<=5 || j>=i); i++,j--){
        cout << "i= " << i << "\tj= "<< j << endl;
    }

    return 0;
}