#include<iostream>
using namespace std;

int main(){
    
   // "Data types" before variables instructs the size and type of the data.
   string name="MyName";//String is not the Data type it is an class.
   char name1[5]="Name";// The size of the char array should be more than 1 character of the actual size of the string. BECAUSE it contains an extra as string ending.


   cout<<sizeof(name)<<endl;
   cout<<"Running";
   return 10000;//Can be given any integer value to the last returning of the main fiunction. But should be integer value. 
   //Returning value always returns to the OS.
}