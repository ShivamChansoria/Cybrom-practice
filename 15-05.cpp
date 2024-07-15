//******************************************** Binary Operator Overloading, Unary Operator Overloading (pre) **************************************/
#include<iostream>
using namespace std;

class A{
    public:
    int x;
    A(){
        x=0;
    }
    A(int y){
        x=y;
    }
    void display(){
        cout<<"The value of x: "<<x<<endl;
    }
    A operator + (A &obj){//****** Binary Operator overloading ********************************************** */
        x=x+obj.x;
        return *this;
    }

    void operator ++ (){//***** Unary Operator overloading************************************************* */
        x=x+1;
    }
};



int main(){

    A a1(5), a2(10);
    A a3;
    a3 = a1 + a2; //********* Can also be written as a3= a1 + (a2); -----------------------> Here the caller is the 'a1'.
    a3.display();
    a3+a2+a1;
    ++a3;// ***************** Will increase the value of 'x' of the calling object.*******************************/
    a3.display();
    a1.display();//********** The object 1 and the object 3 is now same object!!!
    
return 0;
}