//Do While + Switch Case.
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    char ch = 'y';
    cout << "Enter two numbers: ";
    cin >> a >> b;

    do

    {

        cout << "1: Add" << endl;
        cout << "2: Sub" << endl;
        cout << "3: Mul" << endl;
        cout << "4: Div" << endl;
        cout << "5: Exit" << endl;
        cout << "Enter your choice: ";
        cin >> c;

        switch (c)
        {
        case 1:
        case 10://Can be use multiple cases within a single break.
            cout << "Addition of Numbers: " << a + b << endl;
            break;
        case 2:
            cout << "Substraction of Numbers: " << a - b << endl;
            break;
        case 3:
            cout << "Multiplication of Numbers: " << a * b << endl;
            break;
        case 4:
            cout << "Division of Numbers: " << a / b << endl;
            break;
        case 5:
            ch = 'n';
            cout << "Exited!!" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }

        cout << "Do you want to Continue? Select: y/n" << endl;
        cin >> ch;

        if (ch  != 'y' & ch != 'Y')
            cout << "Exiting the loop!!" << endl;

    } while (ch == 'y' || ch=='Y');
    return 0;
}