#include<iostream>
using namespace std;

int main(){
    int a[6];
    int min, max=0;
    for (int i = 0; i <6; i++)
    {
     cout<<"Give the value for the "<<i<<"th index of the array: ";
     cin>>a[i];
    }
    cout<<endl;
    for (int i = 0; i <6; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"The value of the Max in the array: "<<max<<endl;
    min=max; //Can also be set to the 0th index of the array.

    for (int i = 0; i <6; i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"The value of the Min in the array: "<<min<<endl;
   int arr2[6];
   int j=5;
    for(int i=0; i<=5; i++){
        arr2[i]=a[j];
        cout<<arr2[i]<<" "; 
        j--;
        }

return 0;
}