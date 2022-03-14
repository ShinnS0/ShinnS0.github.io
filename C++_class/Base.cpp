#include<iostream>
using namespace std;
class Base{
    private:  // only in class
        int x=9;
    protected:  // in child
        int y=20;
    public:  //  anywhere
        int z=22;
};
class PublicDerived: public Base{
public:
    void display(){
        cout<<"\n______Public Access Mode _____\n";
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
    }
};
class ProtectedDerived: protected Base{
    public:
    void display(){
        cout<<"\n______Protected Access Mode _____\n";
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
    }
};

class PrivateDerived: private Base{
    public:
    void display(){
        cout<<"\n______Private Access Mode _____\n";
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
    }
};

int main(){
    PublicDerived pd1;
    pd1.display();
 //   cout<<pd1.y << endl;
    cout<<pd1.z<<endl;

    ProtectedDerived pd2;
   // cout<<pd2.z <<endl;

    PrivateDerived pd3;
  //  cout<<pd3.z <<endl;
    return 0;
}