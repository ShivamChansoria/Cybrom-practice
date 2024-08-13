//Code is Developed by --'Shivam Chansoria'
#include<iostream>
using namespace std;

int main(){
    int n = 8;
    // char ascii=65;//Initializing the ASCII encoding as characters!!!
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // Here the loop is run for the whole columns so we run it until 'n' is reached!!!
        {
           cout<<i<<" ";
            // Using the 'j' for incrementing the alphabetic character.
        }
        // ascii++;
        cout << endl;
    }

return 0;
}