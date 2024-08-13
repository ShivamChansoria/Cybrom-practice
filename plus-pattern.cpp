//Code is Developed by --'Shivam Chansoria'
//Topic: 
#include<iostream>
using namespace std;

int main(){
    int n=9;
    for (int i = 1; i <= n; i++)
    {
        for (int  j = 1; j <= n; j++)
        {
            if(i== 5 || j==5)
            cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
        
    }
    
return 0;
}