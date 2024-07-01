//*********************************Getting the numbers for each digit values of 10 & Reversing the number************************/
#include<iostream>
using namespace std;

int main(){
    int a=5679999, count=1;
    while (a!=0) 
    {   
    //    count=a%10;
    //    cout<<digit<<" ";
    if( (a=a/10)!=0)
      count++;
    }
    cout<<"The length of the number is: "<<count;
    
return 0;
}