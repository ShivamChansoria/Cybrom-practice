//Code is Developed by --'Shivam Chansoria'
//Topic: Function of a palindrome.
#include<iostream>
using namespace std;

bool isPali(){
    int x;
    cout<< "Give a number: ";
    cin>> x;
    int f=0,b=0;
    if( (x/100)== (x%10))
        cout<<" THe number is Palindrome"<<endl;
    else cout<<" THe number is not Palindrome"<<endl;
}

int main(){
    isPali();
return 0;
}