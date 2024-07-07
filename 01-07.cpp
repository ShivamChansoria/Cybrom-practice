//********************************************Structure in C++ **********************************************************/
#include <iostream>
using namespace std;

struct emp
{
    // string name;
    char name[10];
    float sal;
    int age;
} s1, s2; // Instances Can also be intialized before termination!!!

int main()
{
    emp e1, e2;
    cout << "Give the name and salary of the employee1: ";
    cin >> e1.name >> e1.sal >> e1.age;
    cout << e1.name << " " << e1.sal << " " << e1.age << endl;
    // cout<<e1; Cannot print the structure directly!!!

    e1 = e2; // Copying of the structure is also possible!!!

    emp arr[3]; // Structure instances can also be created as Array.
    cout << "\nGive the name and salary of the employee2: ";
    cin >> arr[0].name >> arr[0].sal >> arr[0].age;
    cout << arr[0].name << " " << arr[0].sal << " " << arr[0].age << endl;
    return 0;
}