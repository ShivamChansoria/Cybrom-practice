#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Provide an Year: ";
    cin >> year;
    if (year % 400 == 0)
    {
        cout << "The Year " << year << " is an Leap year!!!" << endl;
    }
    else if (year % 100 == 0)
    {
        cout << "The Year " << year << " is not an Leap year!!!" << endl;
    }
    else if (year % 4 == 0)
    {
        cout << "The Year " << year << " is an Leap year!!!" << endl;
    }
    else
        cout << "The Year is not a leap year!!!" << endl;

    return 0;
}