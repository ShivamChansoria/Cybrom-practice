//Code is Developed by --'Shivam Chansoria'
#include<iostream>
using namespace std;

int main(){
    int n= 8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)//Here the loop is run for the whole columns so we run it until 'n' is reached!!!
        {
            if(j <= (n-i)){
                cout<<"  ";
            }
            else
            cout << "* " ;
        }
        cout<<endl;
    }

return 0;
}