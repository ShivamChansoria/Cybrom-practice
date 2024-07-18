//************************************ Run time Polymorphism(Virtual Functions) *********************************************/

#include<iostream>
using namespace std;

class P{

    public:
    int b;
    int a;
    P(){
        a=0;
        b=0;
        cout<<"Parent class constructor called()"<<endl;
     }
    P(int x, int y){
        a=x;
        b=y;
    }
    void sum(){
        cout<<"Parent class constructor() called."<<endl;
        cout<<"The sum of a and b is: "<<a+b<<endl;
    }
};

class C : public P{

    public:
    int b;
    int a;
    C(){
        a=0;
        b=0;
        cout<<"Child class constructor called()"<<endl;
     }
    C(int x, int y){
        a=x;
        b=y;
    }
    void sum(){
        cout<<"Child class sum() called!!"<<endl;
        cout<<"The sum of a and b is: "<<a+b<<endl;
    }

};

int main(){
    C c1(100,200);
    P p1, *ptr;//*************** Pointer will also calls Constructor !!! ********************************************/
    c1.sum();
    ptr=&p1;//****************** Parent class pointer can also saves child class object. ****************************/
    ptr->sum();//*************** Will invokes the sum function of 'parent' class instead of 'child' class ***********/
return 0;
}