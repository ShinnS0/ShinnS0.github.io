#include <iostream>
using namespace std;
class Student{
    private:
        int rno;
        string name;
        string course;
    public:
        Student(){     
        }
        Student(int rno,string name,string course){
            this->rno=rno;
            this->name=name;
            this->course=course;
        }
        //getting data
        int getRno(){
            return this->rno;
        }
        string getName(){
            return this->name;
        }
        string getcourse(){
            return this->course;
        }
        //For display
        void display(){
            cout<<"\nRoll No : "<<rno<<"\tName : "<< name<<"\tCourse : "<< course << endl;
        }
};
//Public variable
Student stu[5];
int rno;
string name;
string course;
//search data
void searchData(){
    int num;
    cout << "Enter room-number u want to search: ";
    cin>> num;
    for(int i=0;i<5;i++){
        if(num == stu[i].getRno()){
            cout<<"Roll No : "<<stu[i].getRno()<<"\tName : "<< stu[i].getName()<<"\tCourse : "<< stu[i].getcourse() << endl;
        }
    }
}

int main(){
    for(int i=0;i<5;i++){
            cout<<"Enter Student : "<<i+1<<" Information: "<<endl;
            cout<<"Enter Roll No: ";
            cin>>rno;
            cin.ignore();
            cout<<"Enter Name : ";
            getline(cin,name);
            cout<<"Enter Course : ";
            getline(cin,course);
            stu[i]=Student(rno,name,course);
    }
    for(int i=0;i<5;i++){
        stu[i].display();
    }
    cout << endl;
    searchData();


    return 0;
}