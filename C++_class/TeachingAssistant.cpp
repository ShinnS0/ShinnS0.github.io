#include<iostream>
using namespace std;
class Student{
    private:
        int rno;
    public:
        void enroll(){
            cout<<"I have enrolled in C++"<<endl;
        }
        void payTutionFees(int fees){
            cout<<"I have to pay tution fees:"<<fees<<endl;
        }
};
class Instructor{
    private:
        int salary;
    public:
        void setSalary(int salary){
            this->salary = salary;
        }
        void getSalary(){
            cout<<"I get Salary: "<<salary<<endl;
        }
        void teach(){
            cout<<"I have to teach a subject."<<endl;
        }

};
class TeachingAssistant: public Student,public Instructor{
  public:
    TeachingAssistant(){
        cout<<"I am a teaching assistant."<<endl;
    }
};
int main(){
    TeachingAssistant ta1;
    ta1.enroll();
    ta1.getSalary();
    ta1.payTutionFees(120000);
    ta1.teach();
    return 0;
}