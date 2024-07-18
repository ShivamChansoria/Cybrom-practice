#include<iostream>//# is here 'preprocessor' directive & these files are in "Precompiled" format!!
//These preprocessors are not included in the entire code and can also include normal files by using "" instead of <>.
using namespace std;

int main(){
   string name, lastname;
   cout<<"Enter your Firstname: ";    //Cout & Cin are the Object of the "std" class.
  getline(cin, name);
   cout<<"Your lastname: ";
   cin>>lastname;
   cout<<"Hello, "<<name<<" "<<lastname;
  
  return 0;
}