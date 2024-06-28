//"Goto" Jump STatement

#include <iostream>
using namespace std;

int main()
{
    int table = 2, i = 1;
    aa:
    cout << table * i << endl;
    i++;
    if (i <= 10)
        goto aa;

    return 0;
}