#include<iostream>
using namespace std;

int main(){
    int row=4, col=7, count=0;

    for (int  i = 1; i <= row; i++)
    {
        int space= col/(i+1);
        // cout<<space<<endl;
        count+=1;
        if(i==row) {
            space=0;
        }
       
       for (int k = 0; k<=space; k++)
       {
        cout<<" ";
       }
        
       for (int l = 1; l <=count; l++)
       {
        cout<<"* ";
       }
       cout<<endl;
    }
    
return 0;
}