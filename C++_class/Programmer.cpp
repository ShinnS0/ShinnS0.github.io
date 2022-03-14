#include<iostream>
using namespace std;
class Person{
  private:
    string name;
  public:
    void getData(){
        cout<<"Enter Name: ";
        getline(cin,name);
    }
    void display(){
        cout<<"Name: "<<name<<endl;
    }
};
class Employee: public Person{
    private:
        string company;
        int salary;
    public:
        void getData(){
            Person::getData();
            cout<<"Company Name: ";
            getline(cin,company);
            cout<<"Salary: ";
            cin>>salary;
            cin.ignore();
        }
        void display(){
            Person::display();
            cout<<"Company: "<<company<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};
class Programmer: public Employee{
  private:
     string skillSet;
  public:
     void getData(){
         Employee::getData();
         cout<<"Enter Skill Sets: ";
         getline(cin,skillSet);
     }
     void display(){
         Employee::display();
         cout<<"SkillSets: "<<skillSet<<endl;
     }
};
int main(){
    Programmer programmer1;
    programmer1.getData();
    cout<<"\n__________Progammer Information___________\n";
    programmer1.display();
    return 0;
}