#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if (age > 17)//Does not completed until it doesn't found single semicolon.
    {
        cout << "Yess, You can vote!!!" << endl;
    }
    else if( age < 0 ){
         cout<<"The cannot be in negative age!!!"<< endl;
    }
    else
    {
        cout << "No, You can't vote your age in less than 18!!!" << endl;
    }
    {
        cout<<"Random"<<endl;//Can print the values after using any random parenthese just creates a new scope.
    }
    return 0;
}