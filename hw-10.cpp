#include <iostream>
using namespace std;
//Formula for maeking the patterns is ----------------------> (n-i+1) Here i is the number of rows.

int main()
{
    int n= 4;
    int r=0;
    for (int i = 1; i <= n; i++)
    {   
        for(int k=1; k<=i-1; k++){
                cout<<"   ";
        }
        for (int j = n; j >= i; j--)
        {  

            cout << " * " ;
        }
        cout<<endl;

    }

    return 0;
}