#include <iostream>
using namespace std;
class saleRecord
{
public:
    string itemName;
    int unitPrice;
    int saleQty;
    void addsaleRecord(string itemName,int unitPrice,int saleQty){
        this->itemName=itemName;
        this->unitPrice=unitPrice;
        this->saleQty=saleQty;
    }
    int getSubTotal(){
        return (unitPrice*saleQty);
    }
    void displayInfo(){
        cout << itemName << "\t" << unitPrice << "\t" << saleQty << "\t" << getSubTotal() << "Ks" << endl;
    }
};

int main(){
    saleRecord record1,record2,record3;
    record1.addsaleRecord("Beer",3500,3);
    record2.addsaleRecord("Burger",3200,4);
    record3.addsaleRecord("Piza",7500,1);
    cout << "Sale Record " << endl;
    cout << "Name\tPrice\tQty\tSubTotal" << endl;
    record1.displayInfo();
    record2.displayInfo();
    record3.displayInfo();

    return 0;
}