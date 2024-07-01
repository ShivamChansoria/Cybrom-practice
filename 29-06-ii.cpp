//***********************************A number is a Palindrome Number **************************************/
#include<iostream>
using namespace std;

int main(){
    int a=546, digit=0, rev=0;
    while (a!=0)//Until it got completely divided to the 'zero'.
    {
        digit=a%10;//Taking the last digit of the number!!
        rev=(rev*10) + digit;//Adding it to result with respect to the increasing of respect to the "10". 
        a=a/10;//Reducing the number by 1 digit.
    }
    cout<<"Reverse of the digit is: "<<rev<<endl;
    
return 0;
}