//*********************Program to perform given number is prime or not. ******************************
#include<iostream>
using namespace std;

int main(){
    
    int number;
    here:
    cout<<"Give a number: ";
    cin>>number;
    if(number==0 or number<0 or number==1){
        cout<<"Invalid input!!!"<<endl;
        goto here;
    } 

    bool isPrime(int);//1.Fn Decl
    bool prime=isPrime(number);//3.Fn Call
    if(prime==false){
        cout<<"The number is not a prime!!"<<endl;
    }
    else cout<<"The number is a prime!!"<<endl;
     
return 0;
}

bool isPrime(int number){//2. Fn Defl
     if(number==2) return true;
    for (int i = number-1; i>2; i--)
    {
        if(number%i ==0){
            return false;
        }   
    }
     return true;
}