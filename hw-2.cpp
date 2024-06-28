#include <iostream>
using namespace std;

int main()
{
    int A, B, sum, mul, div, sub;
    cout << " Provide the two numbers A and B: ";
    cin >> A >> B;
    sum = A + B;
    mul = A * B;
    div = A / B;
    sub = A - B;
    cout << "The result of Sum, multiplication, division, subtraction of A&B is: " << sum << " " << mul << " " << div << " " << sub << " respectively" << endl;
    return 0;
}