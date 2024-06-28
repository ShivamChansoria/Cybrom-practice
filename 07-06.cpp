//Factorial is the multiplication of the numbers reducing by the 1 till '1'.

#include<iostream>
using namespace std;

int main(){
    long int ans=1, fact=10, i=1;
    cout<<"Provide the number of factorial you want to: ";
    cin>>fact;

    for(long int i=1; i<=fact; i++){   //Can be initialized twice in the 'for' loop.
     ans*=i;
    }

    cout<<"The factorial of "<<fact<<" is: "<<ans<<endl;
return 0;
}