//********************************* Explicit member function declaration *********************************/
#include<iostream>
using namespace std;

class Student{
    string name;
    
    float marks;

    public:
    int roll_no;
    Student(){//**************** Default Constructor ******************************** */
        name = "Sample";
        roll_no = 0;
        marks = 0;
    }
    Student(string); //**************** Parameterised Constructor Declaration ********************************
    Student(int roll){
        roll_no = roll;
         name = "Sample";
        marks = 0;
    }
    void setData(string n1, int roll, float m1);//****************Function Declaration *********************************/
    // {
    //     name = n1, roll_no=roll, marks=m1;
    // }
    void display(){
        cout<<"Student name:"<<name<<", roll:"<<roll_no<<", and marks is: "<<marks<<endl;
    }
};

//<Retrun_type> <Class> :: <Function_name> (<arguments>)
void Student :: setData(string n1, int roll, float m1){ //"Outside(Explicit)" member function Definition ********************/
    name = n1, roll_no=roll, marks=m1;
}

Student :: Student(string n){ //********************Constructors can also be defined outside of the class. *******************/
    name=n;
}

int main(){
    Student s1, s2("Raaj");//Here the other values of s2 object will get Garbage Values ****************/
    s1.setData("Shivam", 101, 499.5);
    Student s3(s1.roll_no);//Can also pass the data member of a object to a constructor *****************/
    s1.display(), s2.display(), s3.display();
    
    return 0;
}