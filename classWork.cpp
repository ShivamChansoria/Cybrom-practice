#include<iostream>
using namespace std;

int main(){
    int a=2, b=3;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The values of a and b respectively: "<<a<<" "<<b<<" "<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"The values of a and b respectively: "<<a<<" "<<b<<" "<<endl;
    
return 0;
}