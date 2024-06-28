#include <iostream>
using namespace std;

int main()
{
    int a = 20, b = 10, c, ch;
    
    cout << "2 : sub" << endl;
    cout << "1 : add" << endl;
    cout << "Enter Your choice : ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "Addition is: " << a + b << endl;
        break;
    case 2:
        cout << "Subtraction is: " << a - b << endl;
        break;

    default:
        break; // Default will always searches for the first occurrence of semicolon. Can be break or other statement.
    }

    return 0;
}