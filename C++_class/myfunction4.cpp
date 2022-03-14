#include <iostream>
using namespace std;

string cities[3];
//function to access city names

void initiallizeData(){
    for(int i=0;i<3;i++){
        cout << "Enter city name : ";
        getline(cin,cities[i]);
    }

}
void showData(){
    cout << "_________Your city_________"<< endl;
    for(int i=0;i<3;i++){
        cout << cities[i] << endl;
    }
} 
int main(){
    initiallizeData();
    showData();

    return 0;
}