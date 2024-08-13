//Code is Developed by --'Shivam Chansoria'
#include<iostream>
using namespace std;

int main(){
    int x=1;
    for(int i=1; i<= 5; i++){
        for(int j=1; j<= 5; j++){//Square printing nested loops
            cout<<x<<" ";
            x+=2;
            if(x==7) x+=2;//Replacing the 7 with digit 9.
            else if(x>9) x%=10;//Making the value of 'x' single digit.
        }
        cout<<endl;
    }
return 0;
}