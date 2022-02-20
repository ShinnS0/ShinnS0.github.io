#include<iostream>
using namespace std;

int main()
{
    int start,end;
    cout << "Enter start value : ";
    cin >> start;
    cout << "Enter end value : ";
    cin >> end;


    for(int i=start;i<=end;i++)
    { 
        if(( i % 8 == 0 ) && ( i % 5 == 0 ))
	    {
		cout <<  "The number divisible by 8 and 5 : " << i << endl;

	    }
    }

    for(int a=start;a<=end;a++)
    {
        if((a % 8 == 0) && (a % 8 ==0))
        {

        cout << "The number only divisible by only 8 : " << a << endl;
        }
    }

    for(int b=start;b<=end;b++)
    {
        if((b % 5 == 0) && (b % 5 ==0))
        {

        cout << "The number only divisible by only 5 : " << b << endl;
        }
    }
    
    for(int c=start;c<=end;c++)
    {
        if((c % 8 != 0) && (c % 5 != 0))
        {

        cout << "The number not divisible by 8 and 5 : " << c << endl;
        }
    }
    
    return 0;
}