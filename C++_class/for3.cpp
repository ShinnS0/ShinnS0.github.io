#include <iostream>
using namespace std;
int main(){
    int start,end,sum=0,count=0;
    float average;
    cout << "Enter start number : ";
    cin >> start;
    cout << "Enter end number : ";
    cin >> end;

    for (int i=start ; i<=end ;i++){
        // n(n+1)/2 1-10 = 10*11/2
        count++;
        sum +=i;
    }
        average=(float)sum/count;
        cout << "Sum of "<< start <<" to " << end << " is "<< sum << endl;
        cout << "Total count is : " << count << endl;
        cout << "Average : "<< average << endl;
    
    return 0;
}