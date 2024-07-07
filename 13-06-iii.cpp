//********************************************* Arrays *******************************************/
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 12, 13, 14, 15, 16, 17, 18, 19};
    int index = 6;
    arr[index] = 100;
    for (int i = 0; i < 9; i++)
    {
        cout << "The value of " << i << "th index in array is: " << arr[i] << endl;
    }
    return 0;
}