#include <iostream>
using namespace std;
class Employee{
    private:
        int total; 
        int salary;
        string name;
    public:
        
        Employee(){
        }
        Employee(int salary,string name){
            this->total=total;
            this->salary=salary;
            this->name=name;
        }
        int getSalary(){
            return this->salary;
        }
        void displayInfo(){
            cout << "\nName : " << name << "\tSalary : " << salary << endl;
        }
        void salaryIncrease(int amount){
            this->salary += amount;
        }
        void totalSalary(){ 
            int total = total + salary;
        }
        void display(){
            int total;
            cout << "Total salary: "<< total<< endl;
        }
    
};
       
        
int main(){
    Employee emp[4];
    //access employee data from user input
    int salary;
    string name;
    int total;

    for(int i=0;i<4;i++){
        cout << "Enter employee : " << i+1 << "Infomation : " << endl;
        cout << "Enter name : ";
        getline(cin,name); 
        cout << "Enter Salary : ";
        cin >> salary;
        cin.ignore();
        emp[i]=Employee(salary,name);
    }  
    //display info
    cout << "\n_________Employee List Information_________\n";
    for(int i=0;i<4;i++){
        emp[i].displayInfo();
    }
    //salary increase
    for(int i=0;i<4;i++){
        emp[i].salaryIncrease(100);
    }
    //display info
    cout << "\n_________Updated Employee List Information_________\n";
    for(int i=0;i<4;i++){
        emp[i].displayInfo();
    }
    //Total salary
    for(int i=0;i<4;i++){
        emp[i].totalSalary();
    } 
    //display total salary
    for(int i=0;i<1;i++){
        emp[i].display();
    } 

    return 0;
}