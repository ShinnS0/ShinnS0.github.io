#include <iostream>
using namespace std;
class Employee{
    private:
        int salary;
        string name;
        int total;
    public:
        
        Employee(){
        }
        Employee(int salary,string name){
            this->salary=salary;
            this->name=name;
            this->total=total;
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
       
};
        void totalSalary(){
            this->salary = salary;
            int total = total + salary;
            return total;
        }
        cout << "Total Salary : " << total << endl;
        
int main(){
    Employee emp[4];
    //access employee data from user input
    int salary;
    string name;

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
    //Display total
    for(int i=0;i<4;i++){
        emp[i].totalSalary();
       return total; 
    } 
    // cout << "Total Salary : " << total << endl;
    
    
  

   
    return 0;
}