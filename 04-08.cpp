#include<iostream>
using namespace std;

int main(){
    int  a=10, b=5;
    cout<<"The values of a and b before: "<<a<<" and "<<b<<endl;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"The values of a and b after: "<<a<<" and "<<b<<endl;

return 0;
}