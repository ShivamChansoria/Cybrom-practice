//While for the User Handle.
#include<iostream>
using namespace std;

int main(){
    char ch='y';
    string name;

    while (ch=='y')
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Hello "<<name<<endl;
        cout<<"Do you want to continue? y/n"<<endl;
        cin>>ch;
    }
    
return 0;
}