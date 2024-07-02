//****************************************** Structure Pointer & Arrow Operator ******************************************/
#include <iostream>
using namespace std;

struct Book
{
    // char bname[10];
    string name;
    int price;
    float bid;
};

int main()
{
    Book b1, *bptr;//Structure Pointer Initialization.
    bptr= &b1;
    // b1.bname='Book';  //Cannot give the value to the C type string directly need to se function 'Strcpy()'.
    b1.name = "NewBook", b1.price = 100, b1.bid = 34.99;

    cout << (*bptr).name << ", " << (*bptr).price << "Rs., " << (*bptr).bid << "$." << endl; //Needs to use 'Brackets' to "Dereference" the pointer.

    cout << bptr->name << ", " << bptr->price << "Rs., " << bptr->bid << "$." << endl; //Using "Arrow Operator" to "Dereference" the pointer.
    //Arrow operator is also known as Pointer to Object.
    
    return 0;
}