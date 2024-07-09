//**************************************** Constructor & Types: **************************************** */
#include<iostream>
using namespace std;

class Student{
    string name;
    int id;
    float marks;
    public:
    Student(){
        name = "Sample";
        id=001;
        marks = 000;
    }
    Student(string n1, int sid, float m1){
        name=n1;
        id=sid;
        marks = m1;
    }
    void display(){
        cout<<"Students name, id, marks are as follows: "<<name<<", "<<id<<", "<<marks<<endl;
    }
};

int main(){
    Student s1, s2("Sharad", 101, 499.5);
    cout<<"---------------------------------> Student 1 <--------------------------------"<<endl;
    s1.display();
    cout<<"---------------------------------> Student 2 <--------------------------------"<<endl;
    s2.display();

    

return 0;
}