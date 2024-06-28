// Pointer to Array
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 11, 3, 4, 5, 6, 7, 8, 9, 10};
    int *pt1 = &arr[0]; // Here it behaves like a normal variable.
    int *pt2 = arr;     // Here it reflects the starting address of the array.
    cout << *(pt1 + 1) << endl;
    cout << (*pt2) + 1 << endl; // Will not move to the 2nd position of the array.
    cout << *(pt2 + 1) << endl; // Will move to the 2nd position of the array!!
    cout << *(++pt1) << endl;   // For printing in current instances we will need to do pre Increment operator.

    return 0;
}