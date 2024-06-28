#include<iostream>
using namespace std;

int main(){
    int row=0, col=0 ;
    for(row=1; row<=9; row++){
        for(col=1; col<=4; col++){
            if(row==1 or row==5){
                if(row==5 and col==1 )cout<<"* ";
                if(col==2 or col==3)
                cout<<" * ";
            }
            else if(col==1 or col ==4){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
return 0;
}