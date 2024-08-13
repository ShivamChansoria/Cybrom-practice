//Code is Developed by --'Shivam Chansoria'
//Topic: 
#include<iostream>
using namespace std;

int main(){
    int n=33;
    int mid1=11;
    int mid2=22;
    for (int i = 1; i <= mid1; i++)
    {
        for (int  j = 1; j <= mid1; j++)
        {
            if(i==1 or (j==mid1 and i<=6) or (j==1 and i>6) or  i==6 or i==mid1)
            cout<<"* ";
            else cout<<"  ";
        }

         for (int  j = mid1+1; j <= mid2+2; j++)
        {
            if((j==mid1+1 and i<=6) or (i==6 and j<=mid2) or j==mid2 )
            cout<<"* ";
            else cout<<"  ";
        }
         for (int  j = mid2+1; j <= n; j++)
        {
            if(i==1 or (j==mid2+1 and i<=6) or i==6 or (j==n and i>=6) or i==mid1)
            cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    
return 0;
}