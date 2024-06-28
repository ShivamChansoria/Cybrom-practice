#include<iostream>
#define PI 3.14
using namespace std;

int main(){
    float radius, area;
    cout<<"What will the Radius of the circle be? ";
    cin>>radius;
    area=PI*(radius*radius);
    cout<<"The area of the circle for the radius: "<<radius<<" will be: "<<area<<endl;
return 0;
}