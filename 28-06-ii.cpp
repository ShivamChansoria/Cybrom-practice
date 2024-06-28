//**********************************Function for Adding Bonus to Salary by using Function *******************************
#include<iostream>
using namespace std;

int main(){
    int salary=0;
    float bonus=0;
    cout<<"GIve your salary and bonus%: ";
    cin>>salary>>bonus;
    float empSal(int, float);//1.Function Declarations
    int total=empSal(salary, bonus);//3. Function Call
    cout<<"Your salary and with the bonus is:"<<total<<"Rs."<<endl;
return 0;
}

float empSal(int sal, float per){//2.Function Definitions

    float bonus=sal*(per/100);
    cout<<"Your bonus are:"<<bonus<<endl;
    float total=sal+bonus;
    return total;
}