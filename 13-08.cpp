//Code is Developed by --'Shivam Chansoria'
//Topic: 
#include<iostream>
using namespace std;

int main(){
    int arr[]= { 33, 44, 54, 64, 74};
    int brr[]= { 3, 45, 47, 65, 77};
    int crr[]= { 36, 44, 54, 24, 54};
    int drr[]= { 3, 4, 5, 4, 71};
    int tl1=0, tl2=0, tl3=0, tl4=0;

    for (int i = 0; i < 5; i++)
    {
        tl1+= arr[i];
        tl2+= brr[i];
        tl3+= crr[i];
        tl4+= drr[i];
    }

    cout<<tl1<<" "<<tl2<<" "<<tl3<<" "<<tl4<<endl;
    
return 0;
}

/*
1. Write a program to check the array size of 'n'
2. Print all prime value exising in array.
3. Print all the values which are palindrome in the array.
4. Print all the values which are Armstrong in the array.
*/