#include <iostream>
using namespace std;
int main(){
    string brand[5] = {"Apple","Samsung","Vivo","Oppo"};
    string searchName;
    int index = -1;

    cout << "Enter brand to search : " ;
    getline(cin,searchName);

    for(int i=0;i<5;i++){
        if(searchName==brand[i]){
            index=i;
            break;
        }
    }
    if(index== -1){
        cout << "Not found!" << endl;
    }else{
        cout << "Found at position : " << index << endl;
    }
    // cout << searchName << endl;
    return 0;
}