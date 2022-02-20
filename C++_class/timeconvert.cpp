#include <iostream>
using namespace std;

int main(){
    int mySeconds ;
    cout << "Enter seconds to calculate: ";
    cin >> mySeconds;

    int hours = mySeconds/3600;
    int seconds = mySeconds%3600;
    int minutes = seconds/60;
    seconds %= 60;

    cout <<mySeconds << " Seconds = " << hours << " Hours : "<< minutes << " Minutes : " << seconds << " Seconds" << endl;

    return 0;
}