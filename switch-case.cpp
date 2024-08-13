//Code is Developed by --'Shivam Chansoria'
//Topic: 
#include<iostream>
using namespace std;

int main(){
    int n=80;
#include <iostream>
using namespace std;

int main() {
    int number = 8;

    switch (number) {
        case 1 ... 10:
            cout << "Number is between 1 and 10" << endl;
            break;
        case 11 ... 20:
            cout << "Number is between 11 and 20" << endl;
            break;
        default:
            cout << "Number is out of range" << endl;
            break;
    }

}