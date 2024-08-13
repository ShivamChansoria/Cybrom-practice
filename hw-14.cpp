// Code is Developed by --'Shivam Chansoria'
// Topic: Numbers which are reverse Primes.
#include <iostream>
using namespace std;

void revPrime()
{
    cout << "Printing all the prime numbers which are also prime in reverse order" << endl;
    int x = 10;
    for (int i = x; i < 101; i++)
    {
        int count = 0;
        for (int j = 2; j < i/2; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        int rev=0, temp=i;

        while (temp>0)
        {
            rev= rev*10+temp%10;
            temp/=10;
        }


        for (int j = 2; j < rev/2; j++)
        {
            if (rev % j == 0)
            {
                count++;
            }
        }

        if (count == 0)
        {
            {
                cout << i << endl;
            }
        }
    }
}

    int main()
    {
        revPrime();
        return 0;
    }