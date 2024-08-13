//Code is Developed by --'Shivam Chansoria'
//Topic: 
#include<iostream>
using namespace std;

int main(){
    int n=11;
    for (int i = 1; i <= n; i++)
    {
          for (int j = 1; j <= n; j++){
            if(j==1 or i==1 or (j==6 and i<=6) or j==n) cout<<"* ";
            else cout<<"  ";
          }
          cout<<endl;
    }
    
return 0;
}