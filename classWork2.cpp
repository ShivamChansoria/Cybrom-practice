//Printing the special symbols in symmetric formats.
#include<iostream>
using namespace std;

int main(){

    char c1='@', c2='$', c3='#';
    for(int i = 1; i <6; i++){

       for(int j = 1; j <=i; j++){

        if(i==1) cout<<c1;
        else if(i==3) cout<<c2;
        else if(i==5) cout<<c3;
       }

       cout<<endl;
       i++;
    }
return 0;
}