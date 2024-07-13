//*********************************************** Operator Overloading ********************************************************** */
#include<iostream>
using namespace std;

class A{
    public:
    int x;
    A(){
        x=10;
    }  
      A(int y){
        x=y;
    }
    // void sum(A &obj3){
    //     x=x+obj3.x;
    // }
//********************************************** Will work as above !!! ************************************************************** */
      void operator + (A & obj3){
        x+=obj3.x;
      }

    void display(){
        cout<<"The value of x is: "<<x<<endl;
    }
};

int main(){

    A obj1, obj2(50);
    // obj2.sum(obj1);
    obj2 + (obj1);
    obj2.display();//Cannot display the 'void' type function to the 'cout'.

return 0;
}