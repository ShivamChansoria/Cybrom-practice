#include<iostream>
using namespace std;

int main(){
    char c='8';
    // cout<<"IsLower: "<<islower(c)<<endl;
    // cout<<"IsUpper: "<<isupper(c)<<endl;
    // cout<<"IsDigit: "<<isdigit(c)<<endl;
    // cout<<"IsSpace: "<<isspace(c)<<endl;
    // cout<<"IsAlpha: "<<isalpha(c)<<endl;
    // cout<<"IsCntrl: "<<iscntrl(c)<<endl;
    // cout<<"IsAlNum: "<<isalnum(c)<<endl; //Prints '4'
    // cout<<"IsLower: "<<isblank(c)<<endl;

    string str1=" Shivam";
    str1.append("  Chansoriya");
    cout<<str1.find("riya")<<endl;//Returns the index of the first character of matching.
    str1.insert(6," Chandra");
    str1.erase(6, 8);//Provide the first index and the length to be removed.
    cout<<str1.at(7)<<endl;
    string sub= str1.substr(13);
    sub.replace(0,1, "R");
    cout<<sub<<endl;
    cout<<str1.compare(sub)<<endl;
    cout<<str1<<endl;
    cout<<str1.length()<<endl;

    for(int i=0; i<str1.length(); i++){
        str1[i] = toupper(str1[i]);
    }
    cout<<str1<<endl;
    for(int i=1; i<str1.length(); i++){
        str1[i] = tolower(str1[i]);
    }
    cout<<str1<<endl;
    int count=0;
     for(int i=0; i<str1.length(); i++){
        if(isblank(str1[i])){
            count++;
        }
    }
    cout<<"The number of blankspaces are: "<<count<<endl;

    str1.replace(1, 1, "S");
    str1.replace(9, 1, "C");
    cout<<str1<<endl;
    
    int upper=0;
     for(int i=0; i<str1.length(); i++){
      
        if(isupper(str1[i])){
            upper++;
        }
        
    }
    cout<<"The number of Upper Characters are: "<<upper<<endl;

return 0;
}