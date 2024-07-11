//*************************************** Inheritance *********************************************** */
#include<iostream>
using namespace std;

class A{
    public:
    int a;
    A(){
        a=10;
        cout<<"Class A Constructor Called!!!"<<endl;
    }
};

class B : public A{
    public:
    int a;
    B(){
        a=100;
        cout<<"Class B Constructor Called!!!!"<<endl;

    }
    void display(){
        // cout<< a<<", "<<b;   
         }
};

int main(){
    B b1;
    cout<<"The value of 'a' from the derived class is: " << b1.a<<endl;
    cout<<"The value of 'a' from the base class is: " << b1.A::a<<endl;
    b1.display();
    
return 0;
}