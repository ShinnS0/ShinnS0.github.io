#include <iostream>
using namespace std;
int main(){
    int len=4;
    int number []={23,45,53,78};
    cout << "Original array " << endl;
    for(int i=0;i<len;i++){
        cout << number[i] << '\t'; 
    }
    cout << "\n Reverse array " << endl;
    for(int i=len-1;i>=0 ; i--){
        cout << number[i] << '\t';
    }
    cout << endl;
    int largest=number[0];
    for(int i=1;i<len;i++){
        if(largest<number[i]){
            largest=number[i];
        }
    }
    cout << "Largest number in array is : " << largest << endl;
    return 0;
}