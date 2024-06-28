//Case Conversion without using built-in functions.
#include<iostream>
using namespace std;

int main(){
    char input;
    cout<<"Enter your character input: ";
    cin>>input;

    if(input>=97)
        input-=32;//The Character can be subtracted directly in manipulating ASCII values.
    else
        input+=32;//The Character can be added directly in manipulating ASCII values.

    cout<<"Your character input in after conversion: "<<input<<endl;
    

return 0;
}