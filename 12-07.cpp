//******************************************* Multiple Inheritance **************************************************************/
#include<iostream>
using namespace std;

class A{
    public:
    int a;
    A(){
        a=10;
        cout<<" Class A's a: "<< a <<endl;
    }
};
class B{
    public:
    int a;
    B(){
        a=100;
        cout<<"Class B's a: "<< a <<endl;
    }
};
class C: public A, public B{//********* Multiple Inheritance *****************************************
    public:
    int a;
    C(){
        a=1000;
        cout<<"Class C's a: "<< a <<endl;
    }
};
//****************************************Class A + Class B ===> Class C ===> Class D

class D: public C{ //******************* Hybrid Inheritance ********************************
    public:
    int a;
    D(){
        a=100;
        cout<<"Class D's a: "<< a <<endl;
    }
};


int main(){
        C c1;
        cout<< "The value of a of Class A using class C's object: " <<c1.A::a<<endl;//Getting inherited values by "scope resolution operator"

return 0;
}