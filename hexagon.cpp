//Code is Developed by --'Shivam Chansoria'
//Topic: Pyramid
#include<iostream>
using namespace std;

int main(){
    int n=9;
    int temp=n-1;
    for (int  i = 1; i <= n; i++)
    {
        for (int  k = 1; k<=temp; k++)
        {
            cout<<"  ";
        }
        
        for (int j = 1; j <= i; j++)
        {
           cout<<" *  ";
        }

        cout<<endl;
        temp--;
    }
        temp=n-1;

        for (int  i = 1; i <= n; i++)
    {

        for (int j = 0; j <= i-1; j++)
        {
           cout<<"  ";
        }
        for (int  k = 1; k<=temp; k++)
        {
            cout<<" *  ";
        }
    
        cout<<endl;
        temp--;
    }
    
return 0;
}