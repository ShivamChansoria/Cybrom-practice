//Finding the given number is 'Prime' or not.

#include<iostream>
using namespace std;

int main(){
    int prime=3, count=0;
    cout<<"Provide the number which want to be find prime: ";
    cin>>prime;
    for(int i=2; i<prime; i++){
       
        if(prime%i==0){
            cout<<"The number is not prime!"<<endl;
            count++;
            break;
        } 
        
    }    
    if(count==0)
      cout<<"The number is a prime!"<<endl;

return 0;
}