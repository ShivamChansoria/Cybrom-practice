//**********************Global Variables********************************
#include<iostream>
using namespace std;
int global=1000;//Global Variable, Only Variable declaration is possible in global scope without any function()<-----------!

int main(){
    global=100;
    int fun();//1--->Declaration of function
    fun();//3--->Function Calling
    cout<<"Global Variable value: "<<global<<endl;
return 0;
}

// global=500; Throws error, becuase we need a function scope to do anything, after "main"!!!!!!!!!!!!!!!!!!!:)

int fun(){//2--->Function Definition
    global=9999;
}