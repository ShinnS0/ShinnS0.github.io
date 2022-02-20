#include <iostream>
using namespace std;
int main(){
    string uname,pass;
    tryAgain:
    cout << "Enter username : ";
    cin >> uname;
    cout << "Enter password : ";
    cin >> pass;
    if(uname!="mmit" || pass!="admin123"){
        cout << "Username and password erroe! " << endl;
        goto tryAgain;
    }

    cout << " Login Success!" << endl;

    return 0;
}