#include <iostream>
using namespace std;
class Account2
{
private:
    string accHolder;
    string accNumber;
    int balance;

public:
    Account2(){
        this->accHolder="U Kyaw Kyaw";
        this->accNumber="043519";
        this->balance=0;
    }
    void showData(){
        cout << accHolder << "\t" << accNumber << "\t" << balance <<endl;
    }

};

int main(){
    Account2 account1;
    account1.showData();

    return 0;
}