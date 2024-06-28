//********************************************Reference Variable***************************************** */
#include<iostream>
using namespace std;

int main(){
    int a=105, &b=a;
    b=7865;
    cout<<"The value of variable a is: "<<a<<endl;
return 0;
}