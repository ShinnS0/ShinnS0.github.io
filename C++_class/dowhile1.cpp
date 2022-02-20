#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "If u Enter 0, program will terminate! ";

    do{
        cout <<" Please enter a non zero number : ";
        cin >> num;
        if(num>0)
        {
            cout << num << " Is positive!" << endl;
                            
        }else if(num<0)
        {
            cout << num << " Is negative!" << endl;
        }else
        {
            cout << " Terminating from program...! "<< endl;
        }
    }while(num!=0);
    return 0;
    
}