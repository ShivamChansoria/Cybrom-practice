//"Swapping" numbers without using the 3rd variable.

#include<iostream>
using namespace std;

int main(){
    int a=10, b=20;
    // a=a*b;
    // b=a/b;
    // a=a/b;
    a=a+b;
    b=a-b;
    cout<<a<<endl;
    a=a-b;
    cout<<a<<" "<<b<<endl;
return 0;
}