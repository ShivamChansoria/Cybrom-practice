//Constant &  Strings 
#define PI 3.14 //Second way of defining constant by using "#define" not using ";".
#include<iostream>
using namespace std;

int main(){
    //Providing the name to the variable, array and functions is known as Identifiers.
    const bool b1=1;
    // b1=0;
    bool b2=0;
    char c1= 'aggeedf';//Takes only last one character and does not throw an error!!
    float b3=   4.3933  ;
    int a=10, b;
    b=a++;//Will update the variable after assigning the value to 'b'.
    
    cout<<"Value of a is: "<< a<<endl;
    cout<<"Value of b is: "<< b<<endl;
    cout<<"Value of c1 is: "<< c1<<endl;
    cout<<"Value of PI is: "<< PI<<endl;
    cout<<"Value of b1 is: "<<b1<<endl;
    cout<<"Value of b2 is: "<<b2<<endl;
    cout<<"Value of b3 is: "<<b3<<endl;
    
    return 0;
}