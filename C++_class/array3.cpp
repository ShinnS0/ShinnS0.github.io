#include <iostream>
using namespace std;
int main(){
    int mark[5];
    int i = 0;
    while(i<5){
        cout << "Enter mark : ";
        cin >> mark[i];
        i++;
    }
    cout << "Your mark : " << endl;
    int sum =0;

    for(i=0;i<5;i++){
        for(i=0;i<5;i++){
            cout << mark[i] << '\t';
            sum += mark[i];
        }

    }
    cout << " \nTotal marks : " << sum << endl;
    return 0;
}