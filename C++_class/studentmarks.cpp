#include <iostream>
using namespace std;
int main(){
    int count;
    cout << "Enter number of students : ";
    cin >> count;
    int student_mark[count][7];
    for(int i=0;i<count;i++){
            cout << "Enter infomation for student ID : " << i+1 << endl;;
        for(int j=0;j<4;j++){
            if(j==0){
                student_mark[i][j] = i+1;
            }else if(j==1){
                cout << "Enter Programming mark : ";
                cin >> student_mark[i][j];
            }else if(j==2){
                cout << "Enter English mark : ";
                cin >> student_mark[i][j]; 
            }else{
                cout << "Enter Math mark : ";
                cin >> student_mark[i][j];
            }

        }
    }

    for(int i=0;i<count;i++){
          int progrmming=student_mark[i][1];
          int english=student_mark[i][2];
          int maths=student_mark[i][3];
          int total;
          int avg = total/3;
        for(int j=5;j<6;j++){
            if(j==5){
                total = progrmming + english + maths;
                cin >>student_mark[i][j];
            }else{
                avg = student_mark[i][j];
            }
        }
      
          
               
            
        
     }

        

    // Output students marks
    cout << "\nStudent Marks information for : " << count << " Students " << endl;
    cout << "\nID\tPro\tEng\tMath\tTotal\tAvg\tResult"<< endl;
        for(int i=0;i<count;i++){
            for(int j=0;j<7;j++){
                cout << student_mark[i][j] << "\t";
            }
            cout << endl;
        }
    return 0;
}