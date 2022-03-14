#include<iostream>
using namespace std;
void checkLog(){
    string email;
    string password;
    int num;
    input: cout << "Enter email! : ";
    cin>> email;
    cout << "Enter password! : ";
    cin >> password;
    
    if(email=="admin@gmail.com" && password=="password"){
        cout << "Login success!";
    }else{
        cout << "Login error! \n If you want to try again, Please enter '1'!";
        cin >> num;
        if(num==1){
            goto input;
        }
    }
}
int main(){
    cout << "Before invoking login functon!" << endl;
    checkLog();
    cout << "After invoking ;ogin function!" << endl;
    
    return 0;
}