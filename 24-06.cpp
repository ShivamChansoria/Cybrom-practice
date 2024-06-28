//Functions********************************

#include<iostream>
using namespace std;

int main(){
    int inp=5;
    cout<<"Give a value: ";
    cin>>inp;
    int factorial (int);//Function Declaration!!!!!
    cout<<"The factoria of "<<inp<<" is: "<<factorial(inp)<<endl;//Function Call!!!!!!!!
return 0;
}

int factorial(int x){//Function Definition!!!!!!!!!
    int ans=1;
    for(int i=1; i<=x; i++){
       ans*=i;
    }
    return ans;
}