//Code is Developed by --'Shivam Chansoria'
//Topic: Swastik
#include<iostream>
using namespace std;

int main(){
    int n=15;
    int mid=(n+1)/2;

    for (int i =1; i <= n; i++)
    {
        for(int j= 1; j <= n; j++){
            if(j==1 and i<=mid) cout<<"* ";
            if(j>= mid and i==1) cout<<"* ";
            // if(i==mid)cout<<"* ";
            if(j==mid)cout<<"* ";
            if(i>=mid and j==n)cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
            
    }
    
return 0;
}