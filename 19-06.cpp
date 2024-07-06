//Strings!!!!
#include<iostream>
using namespace std;

int main(){
    // char c[10]="Sujataaaa";
    // char c[9]={'S','u','j','a','t','a','a','a','a'};
    string c="Sujataaaa";
    int count=0;

    for (int i = 0; i <9; i++)
    {
        if(c[i]=='a') count++;
    }
 cout<<"The count of a in "<<c<<" is: "<<count<<endl;

return 0;
}