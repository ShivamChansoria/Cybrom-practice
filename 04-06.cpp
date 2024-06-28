#include<iostream>
using namespace std;

int main(){
 int arr[5]={0,1,2,3,4};
 int *ptr=arr;//Only saves the address of the first element and the can referecned the second element by using +1.0
 cout<<*ptr<<endl;   
return 0;
}