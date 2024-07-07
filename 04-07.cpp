// *********************************************** Union in C++ ******************************************* 
#include<iostream>
using namespace std;

//Union does only allots the single memory of the largest data member.
union book{
    int page;
    char name[8];//Allotes the size of 8 bytes to a object.
    float price;
};

int main(){
    
    book b1;
    b1.page=80;
    b1.price=122.99;
    cout << sizeof(b1) << endl;
    cout<< b1.page << endl; // Will show the garbage value becuase the attributes in Unions are not 'Reusable'.
return 0;
}