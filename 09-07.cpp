//****************************************** Copy Constructor ***********************************************/
#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    Student(){//Default constructor!!!!!!!!!!!!!!!
        name="sample";
    }
    Student(string name1){//Parameterised constructor!!!!!!!!
        name=name1;
    }
    Student(Student &student){//Copy constructor!!!!!!!!!
        name=student.name;
    }

};

int main(){
    Student s1;
    Student s2("Shivam");
    Student s3(s2.name);
    Student s4(s3);
    cout<<"Student1: "<<s2.name<<", Student2: "<<s3.name<<", Student3: "<<s3.name<<endl;
return 0;
}