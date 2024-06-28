//ASCII Values for Small Alphabets: 65-90
//ASCII Values for Capital Alphabets: 97-122
//ASCII Values for Digits: 48-57

#include<iostream>
using namespace std;

int main(){
    char input;
    cout<<"Enter your character input: ";
    cin>>input;
    
    if((input>=65 and input<=90) or (input>=97 and input<=122)){//For comparing with the ASCII values we will directly compare them with the 'Range in Numbers'.
        cout<<"The input is a Alphabet!";
    }
    else  if(input>=48 and input<=57 ){
        cout<<"The input is a Number!";
    }
    else{
        cout<<"The input is a Special Character!";
    }
return 0;
}