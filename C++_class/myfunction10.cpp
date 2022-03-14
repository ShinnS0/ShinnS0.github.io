#include <iostream>
using namespace std;

bool equals(int arg1, int arg2){
    return (arg1==arg2)?true:false;
}
bool equals(double arg1, double arg2){
    return (arg1==arg2)?true:false;
}
bool equals(char arg1, char arg2){
    return (arg1==arg2)?true:false;
}
bool equals(string arg1, string arg2){
    return (arg1==arg2)?true:false;
}
int max(int n1, int n2){
    return (n1>n2)?n1:n2;
}
int max(int n1,int n2, int n3){
    int m_val =n1;
    if(m_val<n2){
        m_val=n2;
    }
    if(m_val<n3){
        m_val=n3;
    }
    return m_val;
}

int main(){
    cout << " 9 is equal to 9 : " << equals(9,9) << endl;
    cout << " 3.2 is equal to 9.1 : " << equals(3.2,9.1) << endl;
    cout << " W is equal to Y : " << equals('W','Y') << endl;
    cout << " XY is equal to XY : " << equals("XY","XY") << endl;
    cout << "Max of 5 and 12 is : "<< max(5,12) << endl;
    cout << "Max of 5, 13 and 12 is : "<< max(5,13,12) << endl;
    

    return 0;
}