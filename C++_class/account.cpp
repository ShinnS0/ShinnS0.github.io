#include <iostream>
using namespace std;
class Account{
public:
    string accountHolder;
    string accountNumber;
    int accountBalance =0;
    void creatAccount(string accHolder,string accNumber){
        this-> accountHolder=accHolder;
        this-> accountNumber=accNumber;
        accountBalance=1000;

    }
    void deposite(int depositeAmount){
        accountBalance=accountBalance + depositeAmount;
    }
    bool withdraw(int withdrawAmount){
        if(withdrawAmount>accountBalance){
            return false;
        }else{
            accountBalance=accountBalance-withdrawAmount;
            return true;
        }
    }
    void showData(){
        cout << "_______Current Info________" << endl;
        cout << "Account Holder Name : " << accountHolder << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Balance : " << accountBalance << endl;
    }

};

int main(){
    Account account1;
    account1.showData();
    account1.creatAccount("Zwe Kaung","12345");
    account1.showData();
    account1.deposite(20000);
    bool result = account1.withdraw(50000);
    if(result){
        account1.showData();
    }else{
        cout << "Failed to withdraw! " << endl;
    }

    return 0;
}