#include <iostream>
using namespace std;
class Shoe
{
private:
    int id;
    int price;
    string Name;
    string Brand;
    string color;
    string size;

public:
    Shoe(){
        price=0;
        Name=Brand=color=size="";
    }
    Shoe(int id,string Name,string Brand){
        this->id=id;
        this->Name=Name;
        this->Brand=Brand;
    }
    Shoe(int id,int price,string Name,string Brand,string color,string size){
        this->id=id;
        this->Name=Name;
        this->Brand=Brand;
        this->price=price;
        this->color=color;
        this->size=size;
    }
    void init(int id,string Name,string Brand,int price,string color,string size){
        this->id=id;
        this->Name=Name;
        this->Brand=Brand;
        this->price=price;
        this->color=color;
        this->size=size;
    }
    void showData(){
        cout << id << "\t" << Name << "\t"<< Brand << "\t"<< color <<"\t"<<size <<"\t"<< price << endl;
    }
    
};
int main(){
    Shoe shoe1;
    shoe1.init(1,"Sneaker","Adidas",200000,"White","40");
    shoe1.showData();

    return 0;
}