//Code is Developed by --'Shivam Chansoria'
//Topic: Prints prime 
#include<iostream>
using namespace std;

void printPrime(){
    int n=30;
    for (int i = 3; i <= n; i++)
    {
        int count=0;
        for (int j = i-1; j >= 2; j--)
        {
          if(i%j==0) count++;
          
        }
        if(count==0)
        cout<<i<<endl;
        
    }
    
}

int main(){
    printPrime();
return 0;
}