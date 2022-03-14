#include <iostream>
using namespace std;
int main(){
    int row=2;
    int col=3;
    int number[row][col];
    int count,total;   

    for(int i=0;i<row;i++){ // outer loop for row
        for(int j=0;j<col;j++){ // inner loop for col
            cout << "Enter number : ";
            cin >> number[i][j]; // number[0][0] number[0][1]
            cout << endl;
        }
    }
    cout << "______________Elements_____________\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << number[i][j] << "\t";
            total+=number[i][j];
            count++;
        }
        cout << endl;
    }
    float avg = total*0.1/count;
    cout << "Total : " << total << endl;
    cout << "Average : " << avg;
    cout << "\n Total number : "<< count << endl;

    // Sum of col in 2D array    
    for(int j=0;j<col;j++){ // outer loop for col
        int sum=0;
        for(int i=0;i<row;i++){ // inner loop for row
            sum += number[i][j];
        }
        cout << "\n Sum for col " << j+1 << " : " << sum << endl;
            }

// Calculate Max value for 2D array

    int max_num = number[0][0]; // Variable for max number assigned with first element
    for(int i=0;i<row;i++){
        int max_num_in_row = number[i][0]; // number[0][0] number[1][0]

        for(int j=0;j<col;j++){
            if(max_num<number[i][j]){
                max_num=number[i][j];
            }
            if(max_num_in_row<number[i][j]){
                max_num_in_row = number[i][j];
            }
        }
        cout << "\n Max num is row : " << i << " is " << max_num_in_row << endl;
    }
    cout << "Calculate Max value for 2D array \n";
    cout << "Max value is : " << max_num << endl;

    return 0;
}