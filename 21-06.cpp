//Box Pattern Printing.
#include<iostream>
using namespace std;

int main(){
    int n=5, row=5, col=5;
    for(row=1; row<=n; row++){
        for(col=1; col<=n; col++){
            if(row==1 or row==5 or col==1 or col==5){
                cout<<"* ";
            } else cout<<"  ";
        }
        cout<<endl;

    }
return 0;
}