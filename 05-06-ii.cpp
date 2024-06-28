#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a Character: ";
    cin >> c;

    switch (c)
    {
    case 'a':
        cout << "The character is a Vowel!!!";
        break;
    case 'e':
        cout << "The character is a Vowel!!!";
        break;
    case 'i':
        cout << "The character is a Vowel!!!";
        break;
    case 'o':
        cout << "The character is a Vowel!!!";
        break;
    case 'u':
        cout << "The character is a Vowel!!!";
        break;

    default:
        cout<<"The character is a Consonant";
        break;
    }
    return 0;
}