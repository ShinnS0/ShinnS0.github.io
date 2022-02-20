#include <iostream>
using namespace std;
int main(){
    int mark[5] = {100,90,40,50,90};
    int m= mark[0];
    cout << m << endl;
    cout << mark[1] << endl;
    cout << mark[2] << endl;
    cout << mark[3] << endl;
    cout << mark[4] << endl;
    mark[4]= 120;
    cout << "After changing the value , mark[4] = " << mark[4] << endl;
    int total = mark[0] + mark[1] + mark[2] + mark[3] + mark[4];
    cout << "Total Value is " << total << endl;

    int sum =0;
    for(int i = 0; i<5;i++){
        sum += mark[i];
    }
    cout << "Sum is " << sum << endl;
    return 0;
}