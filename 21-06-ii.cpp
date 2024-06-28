//Printing H Pattern.
#include<iostream>
using namespace std;

int main(){
    int row, col;
    for(row=1; row<=9; row++){
        for(col=1; col<=5; col++){
            if(row==5 or col==1 or col==5){
                cout<<"* ";
            }else cout<<"  ";
        }
        cout<<endl;
    }
return 0;
}