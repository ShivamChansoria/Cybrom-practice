#include<iostream>
using namespace std;

//******************************************* Diamond Problem **************************************************************/
#include<iostream>
using namespace std;

class A{
    public:
    int a;
    A(){
        a=100;
        cout<<" Class A's a: "<< a <<endl;
    }
};
class B: virtual public A{//********* Hybrid Inheritance *****************************************
    public:
    public:
    int b;
    B(){
        b=200;
        cout<<"Class B's a: "<< b <<endl;
    }
};
class C: virtual public A{//********* Hybrid Inheritance *****************************************
    public:
    int c;
    C(){
        c=300;
        cout<<"Class C's a: "<< c <<endl;
    }
};
//****************************************Class A + Class B ===> Class C ===> Class D

class D: public C, public B{ //******************* Multiple Inheritance ********************************
    public:
    int d;
    D(){
        d=400;
        cout<<"Class D's a: "<< d <<endl;
    }
};


int main(){
        D d1;
        //  cout<<d1.a <<endl;//Will not able to call variable 'a' becuase it is Ambiguous!!!!!
    //    cout<<d1.B::a<<endl;//Also not able to call variable 'a'.
        // cout<< "The value of a of Class A using class C's object: " <<c1.A::a<<endl;//Getting inherited values by "scope resolution operator"
        cout<<d1.a <<endl;//Using virtual function to resolve the Diamond problem!!
return 0;
}

