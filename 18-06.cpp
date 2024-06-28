//Sum of two 2D Arrays,,"IMPORTANT!!!"
#include <iostream>
using namespace std;

int main()
{
    int arr[2][2], arr2[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"Enter the value for arr"<<i<<j<< " : ";
            cin>>arr[i][j];
        }
    }
    cout<<"Array 1!!"<<endl;

     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<" The value for arr"<<i<<j<<" is: "<<arr[i][j]<<endl;
        }
    }

    cout<<"Array 2"<<endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"Enter the value for arr"<<i<<j<< " : ";
            cin>>arr2[i][j];
        }
    }
    cout<<"Array 2 Values!!"<<endl;

     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<" The value for arr"<<i<<j<<" is: "<<arr2[i][j]<<endl;
        }
    }

    cout<<"The sum of the array 1 and 2 is:"<<endl;

       for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<" The value for arr"<<i<<j<<" + arr2 "<<i<<j<<" is: "<<arr[i][j]+arr2[i][j]<<endl;
        }
    }

    return 0;
}