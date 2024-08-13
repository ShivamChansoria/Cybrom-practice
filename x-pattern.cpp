//Code is Developed by --'Shivam Chansoria'
//Topic: 
#include<iostream>
using namespace std;

int main(){
    int n=11, temp=n;
    for (int i = 1; i <= n; i++)
    {
           for (int j = 1; j <= n; j++)
           {
                if(i==j or j==temp)cout<<"* ";
                else cout<<"  ";
           }
            // for (int j = 1; j <= n; j++)
        //    {
        //         if(j==temp)cout<<"* ";
        //         else cout<<"  ";
        //    }
           cout<<endl;
           temp--;
    }
    
return 0;
}