#include <iostream>
using namespace std;

int main()
{
    int c;
    cout << "Enter a Number: ";
    cin >> c;

    switch (c)
    {
    case 1:
    case 10:
        cout << "The Day is Sunday!!!";
        break;
    case 2:
        cout << "The Day is Monday!!!";
        break;
    case 3:
        cout << "The Day is Tuesday!!!";
        break;
    case 4:
        cout << "The Day is Wednesday!!!";
        break;
    case 5:
        cout << "The Day is Thursday!!!";
        break;
     case 6:
        cout << "The Day is Friday!!!";
        break;
    case 7:
        cout << "The Day is Saturday!!!";
        break;
    default:
        cout<<"The input is invalid!!!";
    }
    return 0;
}