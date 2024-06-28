//Given Number(for 3 Digit) is Palindrome or not without Loop.
#include<iostream>
using namespace std;

int main(){
    int a, ans1, ans2;
    cout<<"Give a random number!!";
    cin>>a;

    //Solution:
    ans1=a%10;//Getting the last digit of the number.
    ans2=a/100;//Getting the first digit of the number.

    if(ans1==ans2){
        cout<<"The given number is Palindrome!!";
    }
    else cout<<"The given number is not Palindrome!!"<<endl;

return 0;
}