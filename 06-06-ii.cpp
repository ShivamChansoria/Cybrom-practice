#include<iostream>
using namespace std;

int main(){
    int table=33;
    int i = 1;//Takes the i=1 as initialization of the 'for' loop.
    for (;i <= 10; i++)//Can run because there is ";" available for partitioning the for loop.
    // { Can be run same as the normal for loop program.
      cout<<"The value of "<<table<<" * "<<i<<" will be: "<<table*i<<endl;
    // }
    for(;;i++)//Could be run same as the normal for loop program.
    
return 0;
}