#include<iostream>
using namespace std;

int main(){
    int arr[]={0, 1, 2, 3, 4, 5, 6, 7};
    char arr1[]={'R', 'C', 'H'};
    for (int i = 0; i < 8; i++)
    {
       cout<<arr[i]<<" ";
    }
    arr[9]=100;//Extra index can be added later on the pre defined array!!
    cout<<arr[8]<<" "<<arr[9];//Value 8 is inserted automatically by default in between free index.
    
return 0;
}