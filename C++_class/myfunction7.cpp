#include <iostream>
using namespace std;
string brands[5];
int myIndex=0;
void addBrand(string brand){
    brands[myIndex] = brand;
    myIndex++;
}
void showBrand(){
    for(int i=0;i<myIndex;i++){
        cout << brands[i] << endl;
    }
}

int main(){
    addBrand("Iphone");
    addBrand("Samsung");
    addBrand("Huawei");
    addBrand("Oppo");
    addBrand("Vivo");
    
    showBrand();
    return 0;
}