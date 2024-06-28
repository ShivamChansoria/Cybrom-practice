#include<iostream>
using namespace std;

int main(){
    int a[3][4]={{1,2,3,4}, {2,4,6,8}, {3,6,9,12}}; //Inside paranthesis represents the Rows of the Array. 1st index is the Row and 2nd one is Column
        //Here a have 3 Rows and 4 Columns.
       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<" The value for arr"<<i<<j<<" is: "<<a[i][j]<<endl;
        }
        cout<<"Row "<<i+1<<" Completed!!!"<<endl;
    }
return 0;
}