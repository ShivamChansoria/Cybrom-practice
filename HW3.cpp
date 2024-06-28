#include<iostream>
using namespace std;

int main(){
    int prime=10 ;
    cout<<"Give a number which until you want to get a prime: ";
    cin>>prime;
    for(int i=2;i<=prime;i++){
        int count=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
        }if(count==0)
        cout<<i<<endl;
    }
return 0;
}