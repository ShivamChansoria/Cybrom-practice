//Code is Developed by --'Shivam Chansoria'
//Topic:  Window Pattern
#include<iostream>
using namespace std;

int main(){
    int n=13;
        for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==1 or j==1 or i==7 or j==n or i==n or j==7 )
            cout << "* " ;
            else cout<< "  ";
        }
        cout<<endl;
    }
return 0;
}