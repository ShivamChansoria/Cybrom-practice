#include<iostream>
using namespace std;

int main(){
    int salary=0;
    float bonus=0;
    cout<<"GIve your salary and bonus%: ";
    cin>>salary>>bonus;
    float empSal(int, float);
    int total=empSal(salary, bonus);
    cout<<"Your salary and with the bonus is:"<<total<<endl;
return 0;
}

float empSal(int sal, float per){
    float bonus=sal*(per/100);
    cout<<"Your bonus are:"<<bonus<<endl;
    float total=sal+bonus;
    return total;
}