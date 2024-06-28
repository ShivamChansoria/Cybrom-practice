//Array of Pointer[].
#include<iostream>
using namespace std;

int main(){
    int a=5, b=7;
    int *ptr[2];
    ptr[0]=&a;
    ptr[1]=&b;
    cout<<*ptr[0]<<endl;
    cout<<*ptr[1]<<endl;

return 0;
}