//Built In Functions*************
#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);//1st arg.= Operator and 2nd arg.= String
    cout<<"Hello, "<<name<<"!"<<endl;
return 0;
}